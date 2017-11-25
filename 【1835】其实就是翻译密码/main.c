#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char a[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char b[27]= {'E','C','F','A','J','K','L','B','D','G','H','I','V','W','Z','Y','M','N','O','P','Q','R','S','T','U','X'};
    char c[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char d[27]= {'e','r','w','q','t','y','g','h','b','n','u','i','o','p','s','j','k','d','l','f','a','z','x','c','v','m'};
    char x[1000];
    int i,j;
    while(gets(x)!=NULL)
    {
        if(x[0]=='#')break;
        for(i=0;i<strlen(x);i++)
        {
            if(isupper(x[i]))
            {
                for(j=0;j<26;j++)
                {
                    if(a[j]==x[i])
                        printf("%c",b[j]);
                }
            }
            else if(islower(x[i]))
            {
                for(j=0;j<26;j++)
                {
                    if(c[j]==x[i])
                        printf("%c",d[j]);
                }
            }
            else
                printf("%c",x[i]);
        }
        printf("\n");
    }
    return 0;
}
