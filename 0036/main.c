#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,p,q=0;
    int x,y=1;//空格变量
    while(scanf("%d",&n)!=EOF)
    {
        i=1;
        while(i<=n)
        {
            x=n-i+1;
            y=1;
            //输出空格
            while(y<x)
            {
                printf("  ");
                y++;
            }
            //输出星号
            printf("*");
            p=i-1;
            q=0;
            while(q<p)
            {
                printf("****");
                q++;
            }
            printf("\n");
            i++;
        }
        //反向输出
        n=2*(n-1)+1;
        while(i<=n)
        {
            //输出空格
            x=n-i;
            y=(n-1)/2;
            while(y>x)
            {
                printf("  ");
                y--;
            }
            //输出星号
            printf("*");
            q=i;
            while(q<n)
            {
                printf("****");
                q++;
            }
            printf("\n");
            i++;
        }

    }
    return 0;
}
