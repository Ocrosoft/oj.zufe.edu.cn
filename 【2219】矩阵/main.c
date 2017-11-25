#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=j,k=0; k<n; k++)
        {
            if(k==0)
                printf("%d",i);
            else
                printf("% d",i+i*k);
        }
        printf("\n");
    }
    return 0;
}
