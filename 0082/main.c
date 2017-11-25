#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char aa[100],f,s;
    int a,b,i,c,sum=0;
    while(gets(aa)!=NULL)
    {
        a=0,b=0,c=0;
        s='\0';
        for(i=0; aa[i]>='0'&&aa[i]<='9'; i++)
        {
            a=a*10+(aa[i]-'0');
        }
        f=aa[i];
        i++;
        for(; aa[i]>='0'&&aa[i]<='9'; i++)
        {
            b=b*10+(aa[i]-'0');
        }
        i++;
        if(aa[i]=='?')s=aa[i];
        else
        {
            for(; aa[i]>='0'&&aa[i]<='9'; i++)
            {
                c=c*10+(aa[i]-'0');
            }
        }
        if(f=='+'&&s!='?')
        {
            if(a+b==c)sum++;
        }
        else if(f=='-'&&s!='?')
        {
            if(a-b==c)sum++;
        }
        else if(f=='*'&&s!='?')
        {
            if(a*b==c)sum++;
        }
        else if(f=='/'&&s!='?')
        {
            if(a/b==c)sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
