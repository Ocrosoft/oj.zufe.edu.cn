#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,i,sum,sa,t,x;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&sa);
            for(t=sa,x=100; t!=0;)
            {
                sum+=(t/x);
                t%=x;
                if(x==100)x=50;
                else if(x==50)x=10;
                else if(x==10)x=5;
                else if(x==5)x=2;
                else if(x==2)x=1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
