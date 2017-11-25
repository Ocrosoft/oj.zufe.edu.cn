#include <stdio.h>
#include <ctype.h>

int main()
{
    int a,b,r;
    char aa[1000],c;
    int i;
    while(scanf("%s",aa)!=EOF)
    {
        a=0,b=0;
        for(i=0; isalnum(aa[i]); i++)
        {
            a=a*10+(aa[i]-'0');
        }
        c=aa[i];
        i++;
        for(; aa[i]!='\0'; i++)
        {
            b=b*10+(aa[i]-'0');
        }
        switch(c)
        {
        case '+':
            r=a+b;
            break;
        case '-':
            r=a-b;
            break;
        case  '*':
            r=a*b;
            break;
        case '/':
            r=a/b;
            break;
        }
        printf("%d\n",r);
    }
    return 0;
}
