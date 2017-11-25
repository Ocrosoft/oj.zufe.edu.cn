#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4],i,j,max;
    for(i=0; i<3; i++)
        for(j=0; j<4;j++)
            scanf("%d",&a[i][j]);
    max=a[0][0];
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            if(max<a[i][j])
                max=a[i][j];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%-5d",a[i][j]);//%5d里的5不能去掉，否则数字会混乱
        printf("\n");
    }
    printf("最大值是：%d",max);
    return 0;
}
