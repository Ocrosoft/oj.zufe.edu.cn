#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=2,m;
    while(scanf("%d",&n)!=EOF)
    {
        i=2;
        while(i<=n)//递增找素数
        {
            m=2;
            if (m==i)
                printf("%d\n",i);
            while(m<i)//递增找因子
            {
                if (i%m==0)//找到因子马上停止
                {
                    break;
                }
                if (m==i-1)//结束了仍没找到因子,输出该素数
                {
                    printf("%d\n",i);
                }
                m++;
            }
            i++;
        }
    }
    return 0;
}
