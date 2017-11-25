#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    double a,b,c,a1,b1,c1;
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a+b>c&&a+c>b&&b+c>a&&abs(a-b)<c&&abs(a-c)<b&&abs(b-c)<a)
        {
            c1=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
            b1=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
            a1=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*c*b));
            if((int)(a1/PI*180)>90||(int)(b1/PI*180)>90||(int)(c1/PI*180>90))printf("Obtuse triangle\n");
            if((int)(a1/PI*180)==90||(int)(b1/PI*180)==90||(int)(c1/PI*180==90))printf("Right triangle\n");
            if((int)(a1/PI*180)<90&&(int)(b1/PI*180)<90&&(int)(c1/PI*180)<90)printf("Acute triangle\n");
        }
        else printf("It cannot form a triangle\n");
    }
    return 0;
}
