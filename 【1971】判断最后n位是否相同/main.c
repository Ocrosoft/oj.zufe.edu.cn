#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main()
{
    int a,b,t1,t2,prime,n,i;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)break;
        scanf("%d",&n);
        t1=a,t2=b,prime=1;
        for(i=0; i<n&&prime==1; i++)
        {
            if(t1%10==t2%10)
            {
                prime=1;
                t1/=10,t2/=10;
            }
            else
            {
                prime=0;
                break;
            }
        }
        if(prime==1)printf("-1\n");
        else printf("%d\n",a+b);
    }
    return 0;
}
