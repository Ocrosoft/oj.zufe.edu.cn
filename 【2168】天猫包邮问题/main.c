#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[1000]= {0};
    double price;
    int i=0;
    while(scanf("%lf",&price)!=EOF)
    {
        if(price>=88)
        {
            a[i]=1;
        }
        else
        {
            a[i]=15;
        }
        i++;
    }
    for(i=0; a[i]==1||a[i]==15; i++)
    {
        if(a[i]==1)printf("0\n");
        else printf("15\n");
    }
    return 0;
}
