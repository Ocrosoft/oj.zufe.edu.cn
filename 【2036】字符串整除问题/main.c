#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int mod(char* p)
{
    int i,t=0;
    for(i=0; i<strlen(p); i++)
    {
        t*=10;
        t+=*(p+i)-'0';
        if(t>=1111)
        {
            t%=1111;
        }
    }
    if (t==0)return 1;
    else return 0;
}
int main()
{
    char a[1200];
    while(gets(a)!=NULL)
    {
        if (mod(a)==1)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
