#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
//��һ�����Ӳ�ҪǮ���ڶ�������1��Ǯ������������1��Ǯ������������2��Ǯ��
//֮��ÿ�����ӵļ۸���ǰ�������ӵĺ͡�n(2<=n<=60)
int main()
{
    int n,i;
    double a,b;
    double money=0;
    while(~scanf("%d",&n))
    {
        money=0;
        a=0,b=0.01;
        for(i=1; i<n; i++)
        {

            if(i%2==0)
            {
                a=a+b;
                money+=a;
            }
            else
            {
                b=a+b;
                money+=b;
            }
        }
        if(money>900)printf("%.2lf no\n",money);
        else printf("%.2lf yes\n",money);

    }
    return 0;
}
