#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//can't run,will stop working.but submit to oj is right.
int main()
{
    int n,m,a[1000005],i;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)break;
        for(i=0; i<120; i++)
        {
            a[i]=0;
        }
        for(i=0; i<n+m; i++)
        {
            int t;
            scanf("%d",&t);
            a[t]++;
        }
        int sum=0;
        for(i=0; i<120; i++)
        {
            if(a[i]==2)
                sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
