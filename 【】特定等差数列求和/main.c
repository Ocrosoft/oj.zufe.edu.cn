#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int n;
    int i;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        sum=n*2+(n*(n-1)*3)/2;
        printf("%d\n",sum);
    }
    return 0;
}
