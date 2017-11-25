#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//只要是奇数，“最少”只要称一次。。
int main()
{
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        if(n%2)
        {
            printf("1\n");
        }
        else
        {
            for(i=0; n%2==0; i++)
            {
                n/=2;
            }
            printf("%d\n",i+1);
        }
    }
    return 0;
}
