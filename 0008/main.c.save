#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0;
    int n=0;
    int jc=1;
    while (scanf("%d",&n)!=EOF)
    {
        jc=1;
        k=n;
        //while 循环
        /* while (n!=1)
         {
             jc*=n;
             n-=1;
         } */
        //for 循环
        /*for (; n!=1; n--)
        {
            jc*=n;
        }
        */
        //do while 循环
        do
        {
            if (n==1)
            {

                jc=1;
                break;
            }
            jc*=n;
            n-=1;
        }
        while (n!=1);
        //输出
        printf("%d! = %d\n",k,jc);
    }
    return 0;
}
