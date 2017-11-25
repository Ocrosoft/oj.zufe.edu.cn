#include <stdio.h>
#include <stdlib.h>

int main()
{
    double F=0;
    while(scanf("%lf",&F)!=EOF)
    {
        printf("%.2lf\n",5*(F-32)/9);
    }
    return 0;
}
