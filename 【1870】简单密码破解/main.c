#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[120];
    int i;
    while(~scanf("%s",a))
    {
        for(i=0; a[i]!='\0'; i++)
        {
            if(isupper(a[i]))
            {
                if(a[i]=='Z')
                {
                    printf("a");
                }
                else
                {
                    printf("%c",tolower(a[i])+1);
                }
            }
            else if(islower(a[i]))
            {
                if(a[i]>='a'&&a[i]<='c')
                    printf("2");
                else if(a[i]>='d'&&a[i]<='f')
                    printf("3");
                else if(a[i]>='g'&&a[i]<='i')
                    printf("4");
                else if(a[i]>='j'&&a[i]<='l')
                    printf("5");
                else if(a[i]>='m'&&a[i]<='o')
                    printf("6");
                else if(a[i]>='p'&&a[i]<='s')
                    printf("7");
                else if(a[i]>='t'&&a[i]<='v')
                    printf("8");
                else if(a[i]>='w'&&a[i]<='z')
                    printf("9");
            }
            else
                printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
