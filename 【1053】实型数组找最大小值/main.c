#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//没说多组数据...
float max,min;
void max_min(float *a,int n)
{
    max=a[0];
    min=a[0];
    int i;
    for(i=1; i<n; i++)
    {
        max=a[i]>max?a[i]:max;
        min=a[i]<min?a[i]:min;
    }
}
int main()
{
    float a[120];
    int n;
    int i;
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%f",&a[i]);
        }
        max_min(a,n);
        printf("%.2f %.2f\n",max,min);
    }
    return 0;
}
