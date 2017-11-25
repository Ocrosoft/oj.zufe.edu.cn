#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        if(a>=d&&b<c)printf("atm winer\n");
        else if (a>=d&&b>=c)printf("atm and xgs are died\n");
        else if (a<d&&b<c)printf("see you next time\n");
        else if (a<d&&b>=c)printf("xgs winer\n");
    }
    return 0;
}
