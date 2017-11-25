#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[120];
    while(gets(a)!=NULL)
    {
        int i;
        for(i=0; i<strlen(a); i++)
        {
            if(isalpha(a[i]))
                printf("%c",a[i]);
            else if(isalnum(a[i]))
                printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
