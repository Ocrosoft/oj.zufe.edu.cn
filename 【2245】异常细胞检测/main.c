#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int a[120][120];
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=1; i<n-1; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if(a[i][j-1]-a[i][j]>=50)//left
                if(a[i][j+1]-a[i][j]>=50)//right
                    if(a[i+1][j]-a[i][j]>=50)//down
                        if(a[i-1][j]-a[i][j]>=50)//up
                            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
