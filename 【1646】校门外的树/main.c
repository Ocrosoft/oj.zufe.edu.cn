#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int a[10001];
    int road_long,n,i,x,y,sum=0,j;
    scanf("%d%d",&road_long,&n);
    for(i=0;i<=road_long;i++)
    {
        a[i]=1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        for(j=x;j<=y;j++)
        {
            if(a[j]==1)
            {
                a[j]=0;
                sum++;
            }
        }
    }
    printf("%d",road_long-sum+1);
    return 0;
}
