#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,n=1,m=1,sum=0,i;//m:完数;n因子
    while(scanf("%d",&N)!=EOF)
    {
        while(m<N)//递增找完数
        {
            n=1;
            sum=0;
            while(n<m)//递增找因子
            {
                if (m%n==0)//如果是因子则相加
                {
                    sum+=n;
                }
                n++;
            }
            if (sum==m)
            {
                i=1;
                printf("%d its factors are ",m);
                while (i<m)
                {
                    if (m%i==0)//如果是因子则输出
                    {
                        printf("%d ",i);
                    }
                    i++;
                }
                printf("\n");
            }
            m++;
        }
    }
    return 0;
}
