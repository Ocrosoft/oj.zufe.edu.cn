#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c )
        max=a;
    else if (b>a && b>c)
        max=b;
    else if (c>a && c>b)
        max=c;
    else if (a==b && a>c)
        max= a;
    else if (a==c && a>b)
        max =a;
    else if (b==c && b>a)
        max = b;
    else if (a==b && c>a)
        max = c;
    else if (a==c && b>a)
        max= b;
    else if (b==c && a>b)
        max = a;
    else if (a==b && b==c)
        max = a;
    printf("%d",max);
    return 0;
}
