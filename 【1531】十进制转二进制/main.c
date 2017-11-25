#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void t2t(int x)
{
    int i,j,a[1000];
    for(i=0;; i++)
    {
        a[i]=x%2;
        x=x/2;
        if(x==0)
            break;
    }
    for(j=i; j>=0; j--)
        printf("%d",a[j]);
}
int main()
{
    int a,b,c;
    while(~scanf("%d%d",&a,&b))
    {
        c=a+b;
        t2t(c);
        printf("\n");
    }
    return 0;
}
