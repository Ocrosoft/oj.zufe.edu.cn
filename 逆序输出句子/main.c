#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[120];
    int i;
    while(1)
    {
        gets(a);
        if(a[0]=='.') break;
        for(i=0; a[i]!='.'; i++); //i=.
        for(i-=1; i>=0; i--)
            printf("%c",a[i]);
        printf(".\n");
    }
    return 0;
}
