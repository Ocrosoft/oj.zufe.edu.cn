#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int score = 0;
    int sum1 = 0,sum2=0,sum3=0;
    while(1)
    {
        scanf("%d",&score);
        if(score<=0)
            break;
        if(score>85)
            sum1++;
        else if (score>=60 && score<85)
        {
            sum2++;
        }
        else
        {
            sum3++;
        }
    }
    printf(">=85:%d\n60-84:%d\n<60:%d",sum1,sum2,sum3);
    return 0;
}
