#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, sum, i, j;
    int a[7];
    while(1)
    {
        scanf("%d", &n);
        if(n==0)break;
        for (i = 0; i < n; i++)
        {
            sum = 0;
            for (j = 0; j < 7; j++)
            {
                scanf("%d", &a[j]);
            }
            a[3] -= a[6];
            a[4] -= a[6];
            a[5] -= a[6];
            sum += (a[0] - (a[3] + a[4] + a[6]));
            sum += (a[1] - (a[3] + a[5] + a[6]));
            sum += (a[2] - (a[4] + a[5] + a[6]));
            sum += (a[3] + a[4] + a[5] + a[6]);
            printf("%d\n", sum);
        }
    }
    return 0;
}
