#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
void mod(char* p)
{
    int i,t=0;
    for(i=0; i<strlen(p); i++)
    {
        t*=10;
        t+=*(p+i)-'0';
        if(t>=2015)
        {
            t%=2015;
        }
    }
    printf("%d\n",t);
}
void upw(char* p,int q)
{
    q+=1;
    int jw=1;
    for(; q<=strlen(p)&&jw==1; q++)
    {
        jw=0;
        if(*(p+q)=='\0')
        {
            *(p+q)='1';
        }
        else
        {
            if(*(p+q)+1>'9')
            {
                *(p+q)+=1;
                *(p+q)-=10;
                jw=1;
            }
            else
            {
                *(p+q)+=1;
            }
        }
    }
}
void upw2(char* p,int q)
{
    q-=1;
    int jw=1;
    int i;
    for(; q>=-1&&jw==1; q--)
    {
        jw=0;
        if(q==-1)
        {
            for(i=strlen(p); i>0; i--)
            {
                *(p+i)=*(p+i-1);
            }
            *(p+0)='1';
        }
        if(*(p+q)+1>'9')
        {
            *(p+q)+=1;
            *(p+q)-=10;
            jw=1;
        }
        else
        {
            *(p+q)+=1;
        }
    }
}
int main()
{
    char n[1200]= {'0'};//阶乘目标
    char a[1200]= {'0'},s[1200]= {'1'},temp[1200]= {'0'};//乘数，被乘数，临时
    int w;
    int k;
    while(gets(n)!=NULL)
    {
        //阶乘
        a[0]='1';
        for(; stricmp(n,a)!=0;) //停止条件
        {
            w=strlen(a)-1;
            if(a[w]+1>'9')
            {
                a[w]='0';//进位加1
                upw2(a,w);
            }
            else
            {
                a[w]+=1;//不进位加1
            }
            //乘法
            int x,z,t;//被乘数当前位，乘数当前位,临时
            int cur_c,cur_b;
            int s0=0,u=0;//temp的位
            int qq;
            for(qq=0; qq<120; qq++)
            {
                temp[qq]='\0';
            }
            for(cur_c=strlen(a)-1; cur_c>=0; cur_c--,u++)//乘数位数选择
            {
                s0=u;
                z=a[cur_c]-'0';
                cur_b=strlen(s)-1;
                for(; cur_b>=0; cur_b--,s0++)//被乘数位数选择
                {
                    x=s[cur_b]-'0';
                    t=x*z;
                    //进位
                    if(t>=10)
                    {
                        if(temp[s0]+t%10>'9')
                        {
                            temp[s0]+=t%10;//当前位计算
                            temp[s0]-=10;
                            upw(temp,s0);
                            if(temp[s0+1]=='\0')
                            {
                                temp[s0+1]=(t/10+'0');
                            }
                            else
                            {
                                if(temp[s0+1]+t/10>'9')//下一位问题
                                {
                                    temp[s0+1]+=t/10;
                                    temp[s0+1]-=10;
                                    upw(temp,s0+1);
                                }
                                else
                                {
                                    temp[s0+1]+=t/10;
                                }
                            }
                        }
                        else
                        {
                            if (temp[s0]=='\0')
                            {
                                temp[s0]='0';
                                temp[s0]+=t%10;
                                if(temp[s0+1]=='\0')
                                {
                                    temp[s0+1]=(t/10+'0');
                                }
                                else
                                {
                                    if(temp[s0+1]+t/10>'9')//下一位问题
                                    {
                                        temp[s0+1]+=t/10;
                                        temp[s0+1]-=10;
                                        upw(temp,s0+1);
                                    }
                                    else
                                    {
                                        temp[s0+1]+=t/10;
                                    }
                                }
                            }
                            else
                            {
                                temp[s0]+=t%10;//当前位计算
                                if(temp[s0+1]=='\0')
                                {
                                    temp[s0+1]=(t/10+'0');
                                }
                                else
                                {
                                    if(temp[s0+1]+t/10>'9')//下一位问题
                                    {
                                        temp[s0+1]+=t/10;
                                        temp[s0+1]-=10;
                                        upw(temp,s0+1);
                                    }
                                    else
                                    {
                                        temp[s0+1]+=t/10;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        if(temp[s0]+t%10>'9')
                        {
                            temp[s0]+=t%10;//当前位计算
                            temp[s0]-=10;
                            upw(temp,s0);
                        }
                        else
                        {
                            if (temp[s0]=='\0')
                            {
                                temp[s0]='0';
                                temp[s0]+=t%10;
                            }
                            else
                            {
                                temp[s0]+=t%10;//当前位计算
                            }
                        }

                    }
                }
            }
            //字符串倒置
            for(k=0; k<strlen(temp); k++)
            {
                s[k]=temp[strlen(temp)-1-k];
            }
            /*
            //倒置后将s与temp2相加
            int xx;
            for(xx=(strlen(s)-1>strlen(temp2)-1?strlen(s)-1:strlen(temp2)-1);xx>=0;xx--)
            {
                if(s[xx]+(temp2[xx]-'0')>'9')
                {
                    s[xx]+=temp[xx];
                    upw(pa,xx);
                }
                else
                {
                    s[xx]+=(temp[xx]-'0');
                }
            }
            */
        }
        mod(s);
    }
    return 0;
}
