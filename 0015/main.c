#include <stdio.h>
#include <stdlib.h>
int ctof(int C)
{
    int F;
    F=32+C*9/5;
    return F;
}
int main()
{
    int C=-100;
    while (C<=150)
    {
        printf("c=%d->f=%d\n",C,ctof(C));
        C=C+5;
    }
    return 0;
}
