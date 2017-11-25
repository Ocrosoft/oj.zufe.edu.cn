#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N,n,p;
    char a[120];
    int left,right;
    int i,j,k;
    scanf("%d",&N);
    getchar();
    getchar();
    for(i=0; i<N; i++)
    {
        scanf("%d",&n);
        getchar();
        for(j=0; j<n; j++)
        {
            gets(a);
            p=0,left=0,right=0;
            while(1)
            {
                for(k=right; a[k]!=' '; k++)
                {
                    if(a[k]=='\0')
                    {
                        p=1;
                        break;
                    }
                }
                right=k+1;
                k--;
                for(; k>=left; k--)
                {
                    printf("%c",a[k]);
                }
                left=right;
                if(p==1)break;
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
