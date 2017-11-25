#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,j,i;
    char a[120];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a);
        printf("String #%d\n",i+1);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='Z')printf("A");
            else
            {
                printf("%c",a[j]+1);
            }
        }
        printf("\n\n");
    }
    return 0;
}
