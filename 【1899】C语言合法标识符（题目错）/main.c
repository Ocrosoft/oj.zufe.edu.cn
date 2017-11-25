#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[100];
    int n,i,p,j;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(a);
        p=1;
        if(!isalpha(a[0]))
        {
            p=0;
        }
        for(j=1; a[j]!='\0'; j++)
        {
            if((isalnum(a[i]))||(isalpha(a[i]))||(a[i]=='_'));
            else
            {
                p=0;
                break;
            }
        }
        if(p==1)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
