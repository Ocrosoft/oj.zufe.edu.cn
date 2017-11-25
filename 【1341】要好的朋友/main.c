#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n,m;
    int a[51];
    int x,y,i;
    while(~scanf("%d%d",&n,&m))
    {
        for(i=0; i<n; i++)
        {
            a[i]=0;
        }
        for(i=0; i<m; i++)
        {
            scanf("%d%d",&x,&y);
            a[x-1]++;
            a[y-1]++;
        }
        for(i=0; i<n; i++)
        {
            if(i==0)printf("%d",a[i]);
            else
                printf(" %d",a[i]);
        }
        printf("\n");
    }

    return 0;
}
