#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
//题目不难，但是题目有错误。数组长度。
int main()
{
    char t[27]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    char s[200]={'0'};
    int n,i,j,k,l;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(s);
        for(l=0; s[l]!='\0'; l++);
        for(j=0; j<l; j++)
        {
            if(s[j]=='q')
            {
                printf("p");
            }
            else if(s[j]=='a')
            {
                printf("l");
            }
            else if(s[j]=='z')
            {
                printf("m");
            }
            else if(s[j]==' ')
            {
                printf(" ");
            }
            else
            {
                for(k=0; k<27; k++)
                {

                    if(s[j]==t[k])
                    {
                        printf("%c",t[k-1]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
