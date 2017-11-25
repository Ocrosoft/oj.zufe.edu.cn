#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,s;
    long sum,sum2;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        sum2=0;
        for(i=0; i<n-2; i++) //都
        {
            for(j=i+1; j<n-2; j++)
            {
                sum++;
            }
        }
        for(i=0; i<n-2; i++) //小明或大凯
        {
            for(j=i+1; j<n-2; j++)
            {
                for(s=j+1; s<n-2; s++)
                {
                    sum2++;
                }
            }
        }
        printf("%ld\n",sum+sum2*2);
    }
    return 0;
}
