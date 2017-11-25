#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int is_relatively_prime(int a,int b)
{
    int i;
    for(i=2; i<=(a>b?b:a); i++)
    {
        if(a%i==0&&b%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int m,n,a,b,min;
    int i;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m==0&&n==0)break;
        min=99999;
        for(i=1; i<=(m>n?n:m); i++)
        {
            if(m%i==0&&n%i==0)
            {
                a=m/i,b=n/i;
                if(is_relatively_prime(a,b)==1&&a+b<min)
                {
                    min=a+b;
                }
            }
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
