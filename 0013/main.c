#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    t=a/b;
    a=a*b;
    b=t;
    printf("¥¶¿Ì∫Û£¨a = %d b = %d",a,b);
    return 0;
}
