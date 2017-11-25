#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//这只是一个坑人的题
int main()
{
    double a,b;
    while(~scanf("%lf%lf",&a,&b))
    {
        printf("%g\n",a+b);
    }
    return 0;
}
