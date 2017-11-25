#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,t;
    scanf("%d",&num);
    while(num/10 || num%10)
    {
    t=num%10;
    num=num/10;
    sum+=t;
    }
    printf("%d",sum);
    return 0;
}
