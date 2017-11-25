#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//题目没有说有多组数据,但是有多组数据
int main()
{
    int n,i,sum;
    while(~scanf("%d",&n))
    {
        sum=0;
        for(i=0; i<pow(n,2); i++)
        {
            int t;
            scanf("%d",&t);
            if(t==0)
                sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
