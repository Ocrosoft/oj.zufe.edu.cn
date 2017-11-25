#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m,i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        int a[120];
        double ave,sum=0;
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        ave=sum/m;
        sum=0;
        for(j=0;j<m;j++)
        {
            if(a[j]>ave)sum++;
        }
        printf("%.3lf%%\n",sum/m*100);
    }
    return 0;
}
