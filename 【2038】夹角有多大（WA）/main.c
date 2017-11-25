#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    double x1,y1,x2,y2;
    int n,i;
    scanf("%d",&n);
    {
        for(i=0; i<n; i++)
        {
            scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
            double d1=abs((y1/x1)*x2+(-y1)*y2)/sqrt(pow(y1/x1,2)+pow(y1,2));
            double d2=sqrt(pow(x2,2)+pow(y2,2));
            double sin1=d1/d2;
            printf("%.2lf\n",asin(sin1)*(180/3.1415926));
        }
    }
    return 0;
}
