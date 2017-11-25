#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    //定义变量
    int top=0,bottom=10,middle=5;
    int zz[10]= {0};
    int numtofind =0;
    char choose='1';
    bool isfound=false;
    int i = 0;
    int a,b,temp;
    int k;
    //选择数据输入方式
    printf("请选择输入方式（1为一次性输入10个整数，以空格分隔；2为每次输入一个整数，回车输入下一个），请输入1或2：");
    scanf("%c",&choose);
    if (choose == '1')
    {
        printf("请输入10个整数，以空格分隔：");
        scanf("%d %d %d %d %d %d %d %d %d %d",&zz[0],&zz[1],&zz[2],&zz[3],&zz[4],&zz[5],&zz[6],&zz[7],&zz[8],&zz[9]);
    }
    else if (choose == '2')
    {
        printf("请输入10个整数，每次输入1个，回车输入下一个。\n");
        int n=0;
        while (n<10)
        {
            printf("请输入第%d个数:",n+1);
            scanf("%d",&zz[n]);
            n++;
        }
    }
    else if (choose != '1' && choose != '2')
    {
        printf("请输入1或2!");
        return 0;
    }

    //输入数字并进行寻找和返回值
    /*冒泡排序
    for (a=0; a<9; a++)
        for(b=0; b<8-a; b++)
            if(zz[b]>zz[b+1])
            {
                temp=zz[b];
                zz[b]=zz[b+1];
                zz[b+1]=temp;
            }
            */
    //*选择排序
    for (a=0; a<9; a++)
    {
        k=a;
        for (b=a+1; b<10; b++)
            if(zz[b]<zz[k])
                k=b;
        if(k!=a)
        {
            temp=zz[k];
            zz[k]=zz[a];
            zz[a]=temp;
        }
    }
    //*/
    printf("请输入要寻找的数字：");
    scanf("%d",&numtofind);//读取要寻找的数字
    while (top!=middle || bottom!=middle)//判断循环是否可以结束
    {
        if (numtofind==zz[middle])//找到
        {
            isfound=true;
            printf("找到了！%d 是第%d个数(从小到大排序)。循环了%d次。",numtofind,middle+1,i+1);
            break;
        }
        top=(numtofind<zz[middle]?top:middle);//调节Top middle bottom
        bottom=(numtofind<zz[middle]?middle:bottom);
        middle=(top+bottom)/2;
        i++;
    }
    if (isfound==false)//循环完毕，没有找到
        printf("没有找到%d，循环了%d次。",numtofind,i+1);
}
