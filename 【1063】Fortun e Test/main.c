#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[120];
    char b[120];
    int n,p;
    while(~scanf("%d",&n))
    {
        getchar();
        int i,j;
        for(i=0; i<n; i++)
        {
            gets(a);
            p=0;
            int sum;
            for(j=0; j<strlen(a); j++)
            {
                sum=pow(a[j]-'a'+1,2);
                if(sum/100)
                {
                    b[p]=sum/100+'0';
                    b[p+2]=sum%10+'0';;
                    sum/=10;
                    b[p+1]=sum%10+'0';;
                    p+=3;
                }
                else if(sum/10)
                {
                    b[p]=sum/10+'0';;
                    b[p+1]=sum%10+'0';;
                    p+=2;
                }
                else
                {
                    b[p]=sum%10+'0';
                    p++;
                }
            }
            b[p]='\0';
            int k=1;
            sum=0;
            for(j=strlen(b)-1; j>=0; j--)
            {
                sum+=(b[j]-'0')*k;
                k*=10;
            }
            sum%=101;
            if(i==0)
                printf("%d",sum);
            else
                printf("\n%d",sum);
        }
    }

    return 0;
}
