#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[101];
    int n,i,j;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a);
        char t=a[0];
        int sum=0;
        for(j=0;a[j-1]!='\0';j++)
        {
            if(t==a[j])
            {
                sum++;
            }
            else
            {
                printf("%d%c",sum,t);
                sum=1;
                t=a[j];
            }
        }
        printf("\n");
    }
    return 0;
}
