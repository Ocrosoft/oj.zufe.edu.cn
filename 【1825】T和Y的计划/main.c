#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//need while...EOF
int main()
{
    int n,i;
    double p_x[5000],p_y[5000],p_z[5000];
    while(~scanf("%d",&n))
    {
        for(i=0; i<n+2; i++)
        {
            scanf("%lf%lf%lf",&p_x[i],&p_y[i],&p_z[i]);
        }
        double x,y,z;
        x=(p_x[0]+p_x[1])/2;
        y=(p_y[0]+p_y[1])/2;
        z=(p_z[0]+p_z[1])/2;
        double distance;
        distance=sqrt(pow((p_x[2]-x),2)+pow((p_y[2]-y),2)+pow((p_z[2]-z),2));
        double min=distance;
        int minnum=2;
        for(i=3; i<n+2; i++)
        {
            distance=sqrt(pow((p_x[i]-x),2)+pow((p_y[i]-y),2)+pow((p_z[i]-z),2));
            if(distance<min)
            {
                min=distance;
                minnum=i;
            }
        }
        printf("%.3lf %.3lf %.3lf\n",p_x[minnum],p_y[minnum],p_z[minnum]);
    }
    return 0;
}
