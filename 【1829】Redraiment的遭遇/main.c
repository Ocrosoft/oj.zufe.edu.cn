#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int a,b;
    while(1)
    {
        scanf("%d%*c%d",&a,&b);
        if(a==0&&b==0)break;
        int sum=0;
        int month=7,day=1,i;
        for(i=2; month!=9; i++)
        {
            if(month>a)
            {
                sum++;
            }
            else if(month==a&&day>=b)
            {
                sum++;
            }
            if(day+i>31)
            {
                day=day+i-31;
                month++;
                if(month==9)break;
            }
            else
                day+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
