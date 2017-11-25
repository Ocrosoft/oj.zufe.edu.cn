#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x,y;
    if(a%c) x=a/c+1;
    else x=a/c;
    if(b%c) y=b/c+1;
    else y=b/c;
    printf("%d\n",x*y);
    return 0;
}
