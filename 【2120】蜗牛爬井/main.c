#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    double n,x,y;
    int day;
    while(~scanf("%lf",&n))
    {
        if(n==0)break;
        scanf("%lf%lf",&x,&y);
        if(y>=x)
        {
            printf("NO\n");
        }
        else
        {
            for(day=1; n>=x; day++)
            {
                n-=x;
                if(n<=0)
                    break;
                else
                    n+=y;
            }
            printf("%d\n",day);
        }
    }
    return 0;
}
