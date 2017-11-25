#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int cal(int hh1,int hh2,int mm1,int mm2,int ss1,int ss2)
{
    int res=0;
    if(ss2>=ss1)
    {
        res+=(ss2-ss1);
        if(mm2>=mm1)
        {
            res+=(mm2-mm1);
            res+=3600*(hh2-hh1);
        }
        else
        {
            hh2--;
            mm2+=60;
            res+=60*(mm2-mm1);
            res+=3600*(hh2-hh1);
        }
    }
    else
    {
        mm2--;
        ss2+=60;
        res+=(ss2-ss1);
        res+=(ss2-ss1);
        if(mm2>=mm1)
        {
            res+=(mm2-mm1);
            res+=3600*(hh2-hh1);
        }
        else
        {
            hh2--;
            mm2+=60;
            res+=60*(mm2-mm1);
            res+=3600*(hh2-hh1);
        }
    }
    return res;
}
int main()
{
    char a[18];
    while(gets(a)!=NULL)
    {
        int hh1,hh2,mm1,mm2,ss1,ss2;
        hh1=(a[0]-'0')*10+a[1]-'0';
        hh2=(a[9]-'0')*10+a[10]-'0';
        mm1=(a[3]-'0')*10+a[4]-'0';
        mm2=(a[12]-'0')*10+a[13]-'0';
        ss1=(a[6]-'0')*10+a[7]-'0';
        ss2=(a[15]-'0')*10+a[16]-'0';
        if(hh1>hh2)//time is under 12 hour,only need think case:hh1>hh2
        {
            hh2+=24;
            printf("%d\n",cal(hh1,hh2,mm1,mm2,ss1,ss2));
        }
        else
        {
            printf("%d\n",cal(hh1,hh2,mm1,mm2,ss1,ss2));
        }
    }
    return 0;
}
