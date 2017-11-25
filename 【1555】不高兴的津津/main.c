#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,x=8,c,i;
    for(i=1; i<8; i++)
    {
        scanf("%d%d",&a,&b);
        if(a+b>x)
        {
            x=a+b;
            c=i;
        }
    }
    if(x==8)
        printf("0");
    else
        printf("%d",c);
    return 0;
}
