#include<stdio.h>
int main()
{
    int i,n,k,x[10];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; n!=0; i++) // 判断条件 n!=0
        {
            x[i]=n%2;
            n=n/2;
        }
        for(k=i-1; k!=(-1); k--) // 判断条件 k!=-1
            printf("%d",x[k]);// 输出x[k]，不是x[i]
    }
    return 0;
}
