#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    //�������
    int top=0,bottom=10,middle=5;
    int zz[10]= {0};
    int numtofind =0;
    char choose='1';
    bool isfound=false;
    int i = 0;
    int a,b,temp;
    int k;
    //ѡ���������뷽ʽ
    printf("��ѡ�����뷽ʽ��1Ϊһ��������10���������Կո�ָ���2Ϊÿ������һ���������س�������һ������������1��2��");
    scanf("%c",&choose);
    if (choose == '1')
    {
        printf("������10���������Կո�ָ���");
        scanf("%d %d %d %d %d %d %d %d %d %d",&zz[0],&zz[1],&zz[2],&zz[3],&zz[4],&zz[5],&zz[6],&zz[7],&zz[8],&zz[9]);
    }
    else if (choose == '2')
    {
        printf("������10��������ÿ������1�����س�������һ����\n");
        int n=0;
        while (n<10)
        {
            printf("�������%d����:",n+1);
            scanf("%d",&zz[n]);
            n++;
        }
    }
    else if (choose != '1' && choose != '2')
    {
        printf("������1��2!");
        return 0;
    }

    //�������ֲ�����Ѱ�Һͷ���ֵ
    /*ð������
    for (a=0; a<9; a++)
        for(b=0; b<8-a; b++)
            if(zz[b]>zz[b+1])
            {
                temp=zz[b];
                zz[b]=zz[b+1];
                zz[b+1]=temp;
            }
            */
    //*ѡ������
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
    printf("������ҪѰ�ҵ����֣�");
    scanf("%d",&numtofind);//��ȡҪѰ�ҵ�����
    while (top!=middle || bottom!=middle)//�ж�ѭ���Ƿ���Խ���
    {
        if (numtofind==zz[middle])//�ҵ�
        {
            isfound=true;
            printf("�ҵ��ˣ�%d �ǵ�%d����(��С��������)��ѭ����%d�Ρ�",numtofind,middle+1,i+1);
            break;
        }
        top=(numtofind<zz[middle]?top:middle);//����Top middle bottom
        bottom=(numtofind<zz[middle]?middle:bottom);
        middle=(top+bottom)/2;
        i++;
    }
    if (isfound==false)//ѭ����ϣ�û���ҵ�
        printf("û���ҵ�%d��ѭ����%d�Ρ�",numtofind,i+1);
}
