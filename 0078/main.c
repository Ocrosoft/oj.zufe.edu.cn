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
    for(n=5;n<=10000;n++)
    {
        sum=0,y=1,c=1,p=n/y;
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
        if(iss(n)==0 && n%sum==0)printf("%d\n",n);
    }
    return 0;
}
