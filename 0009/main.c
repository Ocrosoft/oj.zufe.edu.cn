#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n=100;
    long sum =0;
    while (n<=1000)
    {
        if (n%3==0 && n%2==0)
        {
            sum+=n;
        }
                    n+=1;
    }
    printf("sum = %ld",sum);
    return 0;
}
