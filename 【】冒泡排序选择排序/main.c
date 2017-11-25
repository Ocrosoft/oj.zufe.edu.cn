#include <stdio.h>
#include <stdlib.h>

int main()
{
    //定义变量
    int sz[3]= {0};  //定义一维数组
    int i = 0;      //输出结果循环限定
    int a,b,temp,k;   //排序变量
    int n=0;          //输入循环限定
    while (n<3)       //输入
    {
        scanf("%d",&sz[n]);
        n++;
    }
    //冒泡排序
    /*
    for (a=0; a<2; a++)
        for(b=0; b<2-a; b++)
            if(sz[b]>sz[b+1])
            {
                temp=sz[b];
                sz[b]=sz[b+1];
                sz[b+1]=temp;
            }
    */
    //*选择排序
    for (a=0; a<2; a++)
    {
        k=a;
        for (b=a+1; b<3; b++)
            if(sz[b]<sz[k])
                k=b;
        if(k!=a)
        {
            temp=sz[k];
            sz[k]=sz[a];
            sz[a]=temp;
        }
    }
    while (i<3)
    {
        printf("%d ",sz[i]);
        i++;
    }
    return 0;
}
