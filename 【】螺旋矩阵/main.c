#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
//不需要变长数组
int main()
{
    int a[100][100];
    int n,x,y;
    while(1)
    {
        scanf("%d%d%d",&n,&x,&y);
        //test
        //scanf("%d",&n);
        if(n==0&&x==0&&y==0)break;
        int i,j;
        for(i=0; i<100; i++)
        {
            for(j=0; j<100; j++)
            {
                if(i<n&&j<n)
                    a[i][j]=0;
                else
                    a[i][j]=1;
            }
        }
        int num=1;
        int flag=1;//1-上,2-右,3-下,4-左
        for(i=0,j=0; num<=n*n; num++)
        {
            a[i][j]=num;
            //四个顶点为转折,左上顶点的下一格也特殊,特别对待
            if(i==n-1&&j==n-1)j--;
            else if(i==0&&j==0)j++;
            else if(i==0&&j==n-1)i++;
            else if(i==n-1&&j==0)i--;
            else if(i==1&&j==0)j++;
            //上下左右四边判断会出错,特别对待
            else if(j==n-1)i++;//右
            else if(j==0)i--;//左
            else if(i==0)j++;//上
            else if(i==n-1)j--;//下
            //其他位置
            else
            {
                if(flag==1)
                    if(a[i][j+1]==0)j++;
                    else
                    {
                        flag=2;
                        i++;
                    }
                else if(flag==2)
                    if(a[i+1][j]==0)i++;
                    else
                    {
                        flag=3;
                        j--;
                    }
                else if(flag==3)
                    if(a[i][j-1]==0)j--;
                    else
                    {
                        flag=4;
                        i--;
                    }
                else if(flag==4)
                {
                    if(a[i-1][j]==0)i--;
                    else
                    {
                        flag=1;
                        j++;
                    }
                }
            }
        }
        printf("%d\n",a[x-1][y-1]);
        //test
        /*
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                    printf("%3d",a[i][j]);
                else printf(" %3d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        */
    }
    return 0;
}
