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
            printf("%-5d",a[i][j]);//%5d���5����ȥ�����������ֻ����
        printf("\n");
    }
    printf("���ֵ�ǣ�%d",max);
    return 0;
}
