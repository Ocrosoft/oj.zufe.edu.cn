#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//�Լ��Ĵ���OLE
int main()
{
    int i,t=0,j;
    char str[1001];
    scanf("%d",&i);
    getchar();
    while(gets(str))
    {
        if(i>0)
        {
            for(j=0; j<strlen(str); j++)
                printf("%c",str[j]);
            printf("\n\n");
        }
        else
        {
            if(t!=0) printf("\n");//�ؼ����Ǿ仰������ ���Ƹ�ʽ��
            t++;
            for(j=0; j<strlen(str); ++j)
            {
                if(' '==str[j])
                {
                    printf("\n\n");
                }
                else
                    printf("%c",str[j]);
            }
            printf("\n");
        }
        i--;
    }
    return 0;
}
