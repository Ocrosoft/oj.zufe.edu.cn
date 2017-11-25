#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,s,i,p;
    scanf("%d",&n);
    i=1;
    while(i<n+1)
        {
    s=0;
    p=0;
    while(s<(n-i+1)*2)
        {
            printf(" ");
            s++;
        }
    while(p<2*i-1)
    {
    printf("*");
    p++;
    }
    printf("\n");
    i++;
    }
    return 0;
}
