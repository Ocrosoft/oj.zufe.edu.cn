#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
void multiply(char* a, char* b, char* c)//this is good!
{//bu jin jue de zi ji de gao jing du xie de hao zha...
    int i, j, ca, cb, * s;
    ca = strlen(a);
    cb = strlen(b);
    s = (int*)malloc(sizeof(int) * (ca + cb));
    for (i = 0; i < ca + cb; i++)
        s[i] = 0;
    for (i = 0; i < ca; i++)
        for (j = 0; j < cb; j++)
            s[i+j+1] += (a[i] - '0') * (b[j] - '0');
    for (i = ca + cb - 1; i >= 0; i--)
        if (s[i] >= 10)
        {
            s[i-1] += s[i] / 10;
            s[i] %= 10;
        }
    i = 0;
    while (s[i] == 0)
        i++;
    for (j = 0; i < ca + cb; i++, j++)
        c[j] = s[i] + '0';
    c[j] = '\0';
    free(s);
}
int main()
{
    char a[100],b[100],c[100];
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s%s",a,b);
        multiply(a,b,c);
        printf("Case %d:\n",i+1);
        if(i==n-1)
            printf("%s * %s = %s",a,b,c);
        else
        {
            printf("%s * %s = %s\n\n",a,b,c);
        }
    }
    return 0;
}
