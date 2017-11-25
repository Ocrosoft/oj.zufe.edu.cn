#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum;
    int x[100],y[100];
    int f;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=0,j=0; i<n; i++,j+=2)
        {
            getchar();
            scanf("%d%d",&x[j],&x[j+1]);
            scanf("%d%d",&y[j],&y[j+1]);
        }
        i=0;
        for(; i<2*n; i+=2)
        {
            f=0;
            for(j=0; j<2*n; j+=2)
            {
                if (j==i) continue;
                else
                {
                    if(x[i]>=x[j] && x[i+1]<=x[j+1] && y[i]>=y[j] && y[i+1]<=y[j+1])
                    {
                        f=1;
                    }
                }
            }
            if(f==1) sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
