#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a1,a2,b1,b2,c1,c2,d1,d2;
    double x1,x2,x3,y1,y2,y3,p1,p2,s1,s2,s;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2)!=EOF)
    {
        x1=sqrt((pow(b1-a1,2)+pow(b2-a2,2)));
        x2=sqrt((pow(c1-b1,2)+pow(c2-b2,2)));
        x3=sqrt((pow(c1-a1,2)+pow(c2-a2,2)));
        y1=sqrt((pow(d1-a1,2)+pow(d2-a2,2)));
        y2=sqrt((pow(d1-c1,2)+pow(d2-c2,2)));
        y3=sqrt((pow(c1-a1,2)+pow(c2-a2,2)));
        p1=(x1+x2+x3)/2;
        p2=(y1+y2+y3)/2;
        s1=sqrt(p1*(p1-x1)*(p1-x2)*(p1-x3));
        s2=sqrt(p2*(p2-y1)*(p2-y2)*(p2-y3));
        s=s1+s2;
        printf("area = %.4f\n",s);
    }
    return 0;
}
