#include<stdio.h>
int main()
{
    long n,m,a,b,c,i;
    while(scanf("%ld%ld",&n,&m)!=EOF)
    {
        i=0;
        while(n<m)
        {
            c=n%10;//��λ
            b=(n/10)%10;//ʮλ
            a=n/100;//��λ
            if (n==(a*a*a+b*b*b+c*c*c))
            {
                if(i==0)printf("%ld",n);
                else
                    printf(" %ld",n);
                i++;
            }
            n++;
        }
        if(i==0)printf("no");
        printf("\n");
    }
    return 0;
}
