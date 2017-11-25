#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int sum[26];
    int n;
    while(~scanf("%d",&n))
    {
        int i;
        for(i=0;i<26;i++)
        {
            sum[i]=0;
        }
        getchar();
        for(i=0;i<n;i++)
        {
            char t;
            scanf("%c",&t);
            sum[t-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(sum[i]==0)
            {
                printf("YES\n");
                break;
            }
        }
        if(i==26)
        {
            printf("Poor big pie!\n");
        }
    }
    return 0;
}
