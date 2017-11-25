#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n,m,ge,tu;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)break;
        if(m%2!=0)
        {
            printf("Error\n");
        }
        else
        {
            tu=m/2-n;
            ge=n-tu;
            if(tu<0||ge<0)
                printf("Error\n");
            else
                printf("%d %d\n",ge,tu);
        }
    }
    return 0;
}
