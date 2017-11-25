#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
//第一粒扣子不要钱，第二粒扣子1分钱，第三粒扣子1分钱，第四粒扣子2分钱，
//之后每粒扣子的价格都是前两粒扣子的和。n(2<=n<=60)
int main()
{
    int n,i;
    double a,b;
    double money=0;
    while(~scanf("%d",&n))
    {
        money=0;
        a=0,b=0.01;
        for(i=1; i<n; i++)
        {

            if(i%2==0)
            {
                a=a+b;
                money+=a;
            }
            else
            {
                b=a+b;
                money+=b;
            }
        }
        if(money>900)printf("%.2lf no\n",money);
        else printf("%.2lf yes\n",money);

    }
    return 0;
}
