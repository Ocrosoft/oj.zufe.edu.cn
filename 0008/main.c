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
        //while ѭ��
        /* while (n!=1)
         {
             jc*=n;
             n-=1;
         } */
        //for ѭ��
        /*for (; n!=1; n--)
        {
            jc*=n;
        }
        */
        //do while ѭ��
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
        //���
        printf("%d! = %d\n",k,jc);
    }
    return 0;
}
