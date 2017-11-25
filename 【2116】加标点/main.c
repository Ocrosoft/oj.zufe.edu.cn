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
        printf("%c",toupper(a[0]));
        int len=strlen(a);
        for(i=1; i<len; i++)
        {
            if(a[i]==' '&&a[i+1]==' ')
            {
                printf(".");
                if(!(a[i+2]=='\0'))
                {
                    printf("%c",toupper(a[i+2]));
                    i++;
                }
                i++;
            }
            else printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
