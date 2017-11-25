#include <stdio.h>
#include <stdlib.h>

double fact(int n)
{
    double jc=1;
    while (n>=1)
    {
        jc*=n;
        n-=1;
    }
    return jc;
}
double mypow(double x,int n)
{
    double m=1;
    int i=0;
    while(i!=n)
    {
        m*=x;
        i++;
    }
    return m;
}
int main()
{
    double x;
    int n;
    while(scanf("%lf %d",&x,&n)!=EOF)
    {
        int i=0;
        double sum =0;
        while (i!=n)
        {
            if (mypow(-1,i)== 1)
                sum+=mypow(x,i+1)/fact(i+1);
            else if (mypow(-1,i)== -1)
                sum-=mypow(x,i+1)/fact(i+1);
            i++;
        }
        printf("%.4lf\n",sum);
    }

    return 0;
}
