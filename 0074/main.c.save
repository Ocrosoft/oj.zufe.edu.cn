#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[100],n=1,sum=0,j;
    for(j=0;; j++)
    {
        scanf("%d",&N[j]);
        if (N[j]==0) break;
    }

    printf("PERFECTION OUTPUT\n");
    for(j=0; N[j]!=0; j++)
    {
        n=1,sum=0;
        while(n<N[j])
        {
            if (N[j]%n==0)
            {
                sum+=n;
            }
            n++;
        }
        if (sum==N[j])
        {
            printf("%5d PERFECT\n",N[j]);
        }
        else if(sum>N[j])
        {
            printf("%5d ABUNDANT\n",N[j]);
        }
        else
            printf("%5d DEFICIENT\n",N[j]);
    }
    printf("END OF OUTPUT");
    return 0;
}
