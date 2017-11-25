#include <stdio.h>
int main()
{
    int a,n,sum,i;
    while(scanf("%d %d",&a,&n)!=EOF)
    {
        sum=1;
        a=a%10;
        for(i=0; i<n; i++)
        {
            sum=(sum*a)%10;
        }
        printf("%d\n",sum);
    }
    return 0;
}
