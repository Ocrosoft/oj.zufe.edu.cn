#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[2];
    int t;
    while(1)
    {
        scanf("%s",a);
        if(a[0]=='0')break;
        t=5*(a[strlen(a)]-'0');
        a[strlen(a)]='\0';
        if(t<10)
        {
            b[0]='0'+t;
            if(a[strlen(a)]>b)
            {
                a[strlen(a)]=((strlen(a)-'0')-b[0])+'0';
            }
            else
            {
                a[(strlen(a)]=(a[strlen(a)]-'0')+10-(b[1]-'0');
                for(i=strlen(a)-1;i>=0;i--)
                {
                    if(a[i]>'0')
                    {
                        a[i]=a[i]-1;
                        break;
                    }
                }
                if(i=-1)
            }
        }
        else
        {
            b[1]='0'+(t%10);
            b[0]='0'+(t/10);
        }
        if(a[strlen(a)]>b)
        }
    return 0;
}
