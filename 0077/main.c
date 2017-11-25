#include <stdio.h>
#include <stdlib.h>

int iss(int n)
{
    int i,j=0;
    if(n==2)j=1;
    for(i=2; i<n; i++)
    {
        if(n%i==0)break;
        if(i==n-1) j=1;
    }
    return j;
}
int main()
{
    int n,x,y,sum,c,p;
    while(1)
    {
        scanf("%d",&n);
        sum=0,y=1,c=1,p=n/y;
        if (n==0)break;
        for(; c!=n;)
        {
            p/=y;
            for(x=2; x<=p; x++)
            {
                if((p%x)==0)
                {
                    if(iss(x)==0) continue;
                    else break;
                }

            }
            c*=x;
            sum+=x;
            y=x;
        }
        printf("%d\n",sum);
    }
    return 0;
}
