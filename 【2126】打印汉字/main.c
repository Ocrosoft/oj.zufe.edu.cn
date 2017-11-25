#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
void oline1(int n)
{
    int i;
    for(i=0; i<2*(n-1)+5; i++)
    {
        printf("*");
    }
    printf("\n");
}
void oline2(int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("*");
        for(j=0; j<n; j++)
        {
            printf(" ");
        }
        printf("*");
        for(j=0; j<n; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        oline1(n);
        oline2(n);
        oline1(n);
        oline2(n);
        oline1(n);
    }

    return 0;
}
