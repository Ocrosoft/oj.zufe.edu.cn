#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    printf("����ǰ��a = %d,b = %d\n",a,b);
    //����
    t=a;
    a=b;
    b=t;
    /*����2
    a+=b;
    b=a-b;
    a-=b;
    */
    printf("������a = %d b = %d",a,b);
    return 0;
}
