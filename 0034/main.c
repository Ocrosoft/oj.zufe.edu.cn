#include <stdio.h>
#include <stdlib.h>
//输入两个正整数m和n，求其最大公约数和最小公倍数。
int main()
{
    int m,n,x,y,b;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        x=1;
        while(x<=(m<n?m:n))
        {
            if (m%x==0 && n%x==0)
            {
                y=x;
            }
            x++;
        }
        x=1;
        while (x<=(m*n))
        {
            if (x%m==0 && x%n==0)
            {
                b=x;
                break;
            }
            x++;
        }
        printf("%d %d\n",y,b);
    }
    return 0;
}
