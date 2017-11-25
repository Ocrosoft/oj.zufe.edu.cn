#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,s;
    double m;
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n<=0) break;
        a=1.0;
        b=2.0;
        s=0,m=0;
        for(i=0; m<n; i++)
        {
            s+=a/b;
            c=b;
            b=a+b;
            a=c;
            m=7.7*s;
        }
        printf("%d\n",i);
    }
    printf("the end.");
    return 0;
}
