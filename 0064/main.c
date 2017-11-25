#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("n e\n");
    printf("！！！！！！！！！！！！\n");
    double e = 1.0;
    int i,n=0,m;
    for(; n<10; n++)
    {
        i=1,m=1;
        e=1.0;
        for(i = 1; i <= n; i++)
        {
            m = m*i;
            e = e + 1.0 / m;
        }
        if(n<3)  printf("%d %g\n",n,e);
            else
        printf("%d %.9lf\n",n,e);
    }
    return 0;
}
