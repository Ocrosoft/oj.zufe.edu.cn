#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    printf("交换前，a = %d,b = %d\n",a,b);
    //方法
    t=a;
    a=b;
    b=t;
    /*方法2
    a+=b;
    b=a-b;
    a-=b;
    */
    printf("交换后，a = %d b = %d",a,b);
    return 0;
}
