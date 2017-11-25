#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0,j=0;
    char op1='A',op2='Z';
    //scanf("%d",&n);//画树专用,必须输入40！！！！
    while(scanf("%d",&n)!=EOF)
    {
        i=0,j=0;
        while(i<n)
        {
            j=n-i;
            op1='A',op2='Z';
            while(j>1)
            {
                printf(" ");
                j--;
            }
            j=i;
            while(j>=0)
            {
                printf("%c",op1);
                op1+=1;
                j--;
            }
            j=i;
            op2=op2-i;
            while(j>=0)
            {
                printf("%c",op2);
                op2+=1;
                j--;
            }
            //if (i!=n-1)
                printf("\n");
            i++;
        }
    }
    //画出一棵树,必须输入40！！！！
/*
    n=n-5;
    j=n-1;
    int s =0;
    while (s<=20)
    {
        j=n-1;
        while(j>1)
        {
            printf(" ");
            j--;
        }
        printf("ABABABABABABA\n");
        s++;
    }
*/
    return 0;
}
