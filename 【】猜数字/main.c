#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chosen = 0;
    int guess=0;
    int count=3;
    int limit=20;
    srand(time(NULL));//�趨����
    chosen=1 + rand() % limit;//�������������ֵ��chosen
    printf("\n����һ����������Ϸ.");
    printf("\n��ѡ����һ��1~20������"" ����Ҫ�³��������.\n");
    for( ; count > 0 ; --count)
    {
        printf("\n�㻹��%d�λ���.",count);
        printf("\n������µ�����:");
        scanf("%d",&guess);
        if(guess == chosen)//�¶���
        {
            printf("\n��ϲ.��¶���!\n");
            return 0;
        }
          else if (guess<1||guess>20)//û�а���������
               printf("��˵�����������1~20.\n");
          else//�´���
            printf("�Բ���,%d �Ǵ����.������ֱ���µ�Ҫ%s.\n",guess,chosen>guess?"��":"С");
              }
              printf("\n��ʧ��������.��ȷ����%d\n",chosen);//ʧ��
              return 0;
}
