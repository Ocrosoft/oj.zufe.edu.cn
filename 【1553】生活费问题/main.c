#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int m_get;//�쵽��Ǯ
    int m_use[12];//������Ǯ
    int m_bor;//���Ǯ
    int m_now;//ʣ�µ�Ǯ
    int sum_t;//���뾭�õĴ���
    int i;
    while(~scanf("%d",&m_get))
    {
        m_bor=0,m_now=0,sum_t=0;
        for(i=0; i<12; i++)
        {
            scanf("%d",&m_use[i]);
        }
        for(i=1; i<=12; i++)
        {
            m_now+=m_get;
            if(m_now>=m_bor)//�ܻ�Ǯ
            {
                m_now-=m_bor;//��Ǯ
                m_bor=0;//Ƿ��Ǯ����
            }
            else
            {
                m_now=0;//ȫ��Ǯ������Ǯ
                m_bor-=m_now;//Ƿ��Ǯ����
            }
            m_now-=m_use[i-1];//��Ǯ
            if(m_now<0)//Ǯ������
            {
                m_now=0;
                m_bor=-m_now;
                sum_t++;
            }
        }
        printf("%d\n",sum_t);
    }
    return 0;
}
