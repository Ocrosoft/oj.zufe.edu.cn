#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
//#include <string.h>
void m_r(char *p,int i)
{
    int j;
    for(j=0;p[j]!='\0';j++);
    int l=j+5;
    for(; l-5>i; l--)
    {
        p[l]=p[l-5];
    }
    p[i+1]='(';
    p[i+2]='m';
    p[i+3]='a';
    p[i+4]='x';
    p[i+5]=')';
}
int main()
{
    char a[120]= {'0'};
    int max,i;
    while(gets(a)!=NULL)
    {
        max=a[0];
        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]>max)max=a[i];
        }
        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]==max)
            {
                m_r(a,i);
                i+=5;
            }
        }
        puts(a);
    }
    return 0;
}
