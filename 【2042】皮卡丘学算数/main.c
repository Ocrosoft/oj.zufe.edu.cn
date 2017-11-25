#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int a,b;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>=100)
        {
            int temp1,temp2;
            temp1=a%10;
            a/=10;
            temp2=a%10;
            a=temp2*10+temp1;
        }
        if(b>=100)
        {
            int temp1,temp2;
            temp1=b%10;
            b/=10;
            temp2=b%10;
            b=temp2*10+temp1;
        }
        int sum;
        sum=a+b;
        if(sum>=100)
        {
            int temp1,temp2;
            temp1=sum%10;
            sum/=10;
            temp2=sum%10;
            sum=temp2*10+temp1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
