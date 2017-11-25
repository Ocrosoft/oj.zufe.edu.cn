#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[200];
    int n,i,j;
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0,j=0; i<n; i++)
        {
            if(!(a[i]%13))
            {
                if(j==0)printf("%d",a[i]);
                else printf(" %d",a[i]);
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}
