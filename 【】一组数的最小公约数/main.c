#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n,i,j,min,ys;
    long a[100];
    while(1)
    {
        scanf("%ld",&n) ;
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            scanf("%ld",&a[i]);
            if (i==0) min=a[0];
            min=(a[i]<min?a[i]:min);
        }
        for(j=1; j<=min; j++)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%j!=0)break;
                if(i==(n-1)) ys=j;
            }
        }
        printf("%ld\n",ys);
    }
    return 0;
}
