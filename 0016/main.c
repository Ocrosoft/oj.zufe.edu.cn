#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    double a,b,c,a1,b1,c1;
    scanf("%lf%lf%lf",&a,&b,&c);
    c1=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
    b1=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
    a1=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*c*b));
    printf("%.4lf\n",a1/PI*180);
    printf("%.4lf\n",b1/PI*180);
    printf("%.4lf\n",c1/PI*180);
    return 0;
}
