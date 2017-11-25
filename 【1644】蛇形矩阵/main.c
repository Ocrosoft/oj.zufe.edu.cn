#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    int i,j,x=1,t;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        printf("%d",x+j);
        x+=j;
        t=x;
        for(i=2+j; i<=n; i++)
        {
            printf(" %d",t+i);
            t+=i;
        }
        printf("\n");
    }
    return 0;
}
