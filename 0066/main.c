#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        //first line
        if(n==0) break;
        for(i=0; i<((1+(n-1)*3)-n)/2; i++)
            printf(" ");
        for(i=0; i<n; i++)
            printf("*");
        for(i=0; i<((1+(n-1)*3)-n)/2; i++)
            printf(" ");
        printf("\n");
        //2~n-1 line
        for(j=1; j<n-1; j++)
        {
            for(i=0; i<((1+(n-1)*3)-n)/2-j; i++)
                printf(" ");
            printf("*");
            for(i=0; i<n+(j-1)*2; i++)
                printf(" ");
                printf("*");
            for(i=0; i<((1+(n-1)*3)-n)/2-j; i++)
                printf(" ");
            printf("\n");
        }
        //last line
        for(i=0; i<(1+(n-1)*3); i++)
            printf("*");
        printf("\n");
    }
    return 0;
}
