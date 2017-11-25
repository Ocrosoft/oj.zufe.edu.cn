#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double L1,L2,L3,R,S,Q,C;
    double x1,y1,x2,y2,x3,y3;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        L1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        L2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        L3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        Q=(L1+L2+L3)/2;
        S=sqrt(Q*(Q-L1)*(Q-L2)*(Q-L3));
        R=(L1*L2*L3)/(4*S);
        C=2*3.141592653589793*R;
        printf("%.2lf\n",C);
    }
    return 0;
}
