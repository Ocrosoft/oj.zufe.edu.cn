#include <stdio.h>

int ws(int num)
{
    int n=0;
    while(num!=0)
    {
        num=num/10;
        n++;
    }
    return n;
}
int main()
{
    char aa[1000]={0};
    int sum,i,temp;
    while(1)
    {
        sum=0;
        scanf("%s",aa);
        if(aa[0]=='0')break;
        for(i=0; aa[i]!='\0'; i++)
        {
            sum+=aa[i]-'0';
        }
        while(sum>=10)
        {
            temp=sum;
            for(i=ws(sum)-1; i>=0; i--)
            {
                aa[i]='0'+temp%10;
                temp/=10;
            }
            i=ws(sum);
            aa[i]='\0';
            for(i=0,sum=0; aa[i]!='\0'; i++)
            {
                sum+=aa[i]-'0';
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
