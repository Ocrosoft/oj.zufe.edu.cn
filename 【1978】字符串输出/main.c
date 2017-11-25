#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,i,j,k;
    int a[100];
    char out[4]={'A','C','M','\0'};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i]*3;j++)
        {
            for(k=0;k<a[i];k++)
            {
                printf("%s",out);
            }
            printf("\n");
        }
    }
    return 0;
}
