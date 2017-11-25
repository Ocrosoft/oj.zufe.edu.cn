#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x[120],y[120],high;
    int n,i,winner;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            scanf("%lf%lf",&x[i],&y[i]);
            if(i==0)
            {
                high=sqrt(pow(x[i],2)+pow(y[i],2));
                winner=i+1;
            }
            else
            {
                if((sqrt(pow(x[i],2)+pow(y[i],2))>high))
                {
                    high=sqrt(pow(x[i],2)+pow(y[i],2));
                    winner=i+1;
                }
            }
        }
        printf("%d\n",winner);
    }
    return 0;
}
