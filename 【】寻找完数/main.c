#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,n=1,m=1,sum=0,i;//m:����;n����
    while(scanf("%d",&N)!=EOF)
    {
        while(m<N)//����������
        {
            n=1;
            sum=0;
            while(n<m)//����������
            {
                if (m%n==0)//��������������
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
                    if (m%i==0)//��������������
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
