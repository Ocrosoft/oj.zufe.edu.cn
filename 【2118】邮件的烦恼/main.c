#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        getchar();
        int i;
        int sum=0;
        for(i=0; i<n; i++)
        {
            char a[120];
            gets(a);
            int j;
            if(strlen(a)<3);
            else
            {
                for(j=0; j<=strlen(a)-3; j++)
                {
                    if(tolower(a[j])=='a'&&tolower(a[j+1])=='c'&&tolower(a[j+2])=='m')
                    {
                        sum++;
                        break;
                    }
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
