#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    int a[101];
    while(~scanf("%d",&n))
    {
        if(n==0)break;
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int min=a[0],minindex=0;
        for(i=1; i<n; i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                minindex=i;
            }
        }
        int temp=a[minindex];
        a[minindex]=a[0];
        a[0]=temp;
        for(i=0; i<n; i++)
        {
            if(i==0)printf("%d",a[i]);
            else printf(" %d",a[i]);
        }
        printf("\n");

    }
    return 0;
}
