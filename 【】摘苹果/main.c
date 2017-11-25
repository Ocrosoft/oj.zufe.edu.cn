#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[10];
    int reach;
    int i;
    int sum;
    while(scanf("%d",&a[0])!=EOF)
    {
        for(i=1; i<10; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&reach);
        sum=0;
        for(i=0; i<10; i++)
        {
            if(reach+30>=a[i])sum++;
        }
        printf("%d\n",sum);
    }

    return 0;
}
