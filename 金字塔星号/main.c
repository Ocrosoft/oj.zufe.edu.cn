#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],j,k;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<a[i]; j++)
        {
            for(k=0; k<a[i]-1-j; k++)
            {
                printf(" ");
            }
            for(k=0;k<1+j*2;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
