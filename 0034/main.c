#include <stdio.h>
#include <stdlib.h>
//��������������m��n���������Լ������С��������
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