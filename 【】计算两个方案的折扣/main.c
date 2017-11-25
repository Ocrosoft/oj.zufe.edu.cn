#include <stdio.h>
#include <stdlib.h>
//需要四舍五入！
int main()
{
    int money =0;
    float de =0;
    int dec =0;
    while(scanf("%d",&money)!=EOF)
    {
        de=0;
        dec=0;
        if (money<250)
            de=0.01;
        if (money<500 &&money>=250)
            de=0.02;
        if(money<1000 && money>=500)
            de=0.05;
        if (money<2000 &&money>=1000)
            de=0.08;
        if(money<3000 && money>=2000)
            de=0.10;
        if(money>=3000)
            de=0.12;
        if (money>=200 && money<400)
            dec=12;
        if(money>=400 && money<800)
            dec=30;
        if(money>=800 && money<1600)
            dec=75;
        if (money>=1600 && money <2400)
            dec=175;
        if(money>=2400 && money <3000)
            dec=280;
        if(money>=3000)
            dec=375;
        printf("方案%s折扣最大，消费者最多可省%d元钱\n",((money*de)>(dec)?"一":"二"),((money*de)>(dec)?((int)(money*de+0.5)>(int)money*de?(int)(money*de)+1:(int)(money*de)):dec));
    }
    return 0;
}
