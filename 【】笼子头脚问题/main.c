#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int nCases, i, nFeet;                  //nCases��ʾ����������ݵ�������nFeet��ʾ����Ľ���
    scanf("%d",&nCases);
    while(nCases--)
    {
        scanf("%d",&nFeet);
        if(nFeet % 2!= 0)        //�������ţ�û�д�
            printf("0 0\n");
        else if(nFeet % 4 != 0)      //��Ҫ������Ŀ���٣�ʹ���ﾡ����4ֻ��
//��Ҫ������Ŀ��࣬ʹ���ﾡ����2ֻ��
            printf("%d %d\n",nFeet/4 +1, nFeet/2);
        else
            printf("%d %d\n",nFeet/4, nFeet/2);
    }
    return 0;
}
