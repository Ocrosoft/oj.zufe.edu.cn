#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
     int *array = 0, num, i;
     printf("please input the number of element: ");
     scanf("%d", &num);

     // ���붯̬����ʹ�õ��ڴ��
     array = (int *)malloc(sizeof(int)*num);
     if (array == 0)             // �ڴ�����ʧ��,��ʾ�˳�
     {
         printf("out of memory,press any key to quit...\n");
         exit(0);             // ��ֹ��������,���ز���ϵͳ
     }

     // ��ʾ����num������
      printf("please input %d elements: ", num);
      for (i = 0; i < num; i++)
         scanf("%d", &array[i]);

     // ����������num������
     printf("%d elements are: \n", num);
     for (i = 0; i < num; i++)
         printf("%d,", array[i]);

     printf("\b \n");    // ɾ�����һ�����ֺ�ķָ�������
     free(array);        // �ͷ���malloc����������ڴ��
     return 0;
}
