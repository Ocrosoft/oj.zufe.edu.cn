#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    while(scanf("%c",&x)!=EOF)
    {
        //fflush(stdin);
        getchar();
        if (x>=77)
        {
            x=77-(x-77)+1;
        }
        else if (x<77)
        {
            x=x+1+2*(77-x);
        }
        printf("%c",x);
        printf("\n");
    }
    return 0;
}
