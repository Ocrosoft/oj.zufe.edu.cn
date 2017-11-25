#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int m_get;//领到的钱
    int m_use[12];//花掉的钱
    int m_bor;//借的钱
    int m_now;//剩下的钱
    int sum_t;//陷入经济的次数
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
            if(m_now>=m_bor)//能还钱
            {
                m_now-=m_bor;//还钱
                m_bor=0;//欠的钱清零
            }
            else
            {
                m_now=0;//全部钱用来还钱
                m_bor-=m_now;//欠的钱减掉
            }
            m_now-=m_use[i-1];//花钱
            if(m_now<0)//钱不够用
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
