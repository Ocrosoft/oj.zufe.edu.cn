#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a;
    int b;
    scanf("%c %d",&a,&b);
    printf("%c\n",b-a);
    while(~scanf("%*c%c%d",&a,&b))
    {
        printf("\n");
        printf("%c\n",b-a);
    }
    return 0;
}
