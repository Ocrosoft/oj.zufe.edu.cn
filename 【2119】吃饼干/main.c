#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int k=0;
        while(1)
        {
            if(n>500)
            {
                n-=20;
                k++;
            }
            else if(n<=500&&n>100)
            {
                n-=10;
                k++;
            }
            else if(n<=100&&n>0)
            {
                n=0;
                k++;
            }
            else
            {
                printf("%d\n",k);
                break;
            }
        }
    }
    return 0;
}
