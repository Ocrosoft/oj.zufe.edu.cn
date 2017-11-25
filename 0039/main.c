#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char b1[27]= {'a','b','c','e','d','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char b2[27]= {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','d','e','c','b','a'};
    //gets(b1);
    //gets(b2);
    char s[65]= {0};
    int i,n;
    char a,b;
    while(gets(s)!=NULL)
    {
        for(i=0; i<strlen(s); i++)
        {
            if (islower(s[i])==0)
            {
                printf("%c",s[i]);
            }
            else
            {
                for(n=0; n<strlen(b1); n++)
                {

                    a=s[i],b=b1[n];
                    if (a==b)
                    {
                        printf("%c",b2[n]);
                        break;
                    }
                }

            }
        }
        printf("\n");
    }
    return 0;
}
