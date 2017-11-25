#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int sum[26];
    int n,i,j;
    char a[120];
    while(~scanf("%d",&n))
    {
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<26; j++)
            {
                sum[j]=0;
            }
            gets(a);
            for(j=0; j<strlen(a); j++)
            {
                sum[a[j]-'a']++;
            }
            int  max=sum[0];
            int index=0;
            for(j=0; j<26; j++)
            {
                if(sum[j]>=max)
                {
                    max=sum[j];
                    index=j;
                }
            }
            printf("%c\n",'a'+index);
        }
    }
    return 0;
}
