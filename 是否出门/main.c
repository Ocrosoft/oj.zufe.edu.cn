#include <stdio.h>
int isry(int y)
{
        if(((y%100==0)&&(y%400==0))||((y%100!=0)&&(y%4==0)))
            return 29;//29day
        else
            return 28;
}
int iss(int n)
{
    int i,j=0;
    if(n==2)j=1;
    for(i=2; i<n; i++)
    {
        if(n%i==0)break;
        if(i==n-1) j=1;
    }
    return j;
}
int main()
{
    int year,month,day,dayinyear;
    while(scanf("%d%d%d",&year,&month,&day)!=EOF)
    {
        if(year==0&&month==0&&day==0)break;
        if(month==1&&day==1)printf("no\n");
        else
        {
            if(month==1)dayinyear=day;
            else if(month==2)dayinyear=31+day;
            else if(month==3)dayinyear=31+isry(year)+day;
            else if(month==4)dayinyear=31+isry(year)+31+day;
            else if(month==5)dayinyear=31+isry(year)+31+30+day;
            else if(month==6)dayinyear=31+isry(year)+31+30+31+day;
            else if(month==7)dayinyear=31+isry(year)+31+30+31+30+day;
            else if(month==8)dayinyear=31+isry(year)+31+30+31+30+31+day;
            else if(month==9)dayinyear=31+isry(year)+31+30+31+30+31+31+day;
            else if(month==10)dayinyear=31+isry(year)+31+30+31+30+31+31+30+day;
            else if(month==11)dayinyear=31+isry(year)+31+30+31+30+31+31+30+31+day;
            else if(month==12)dayinyear=31+isry(year)+31+30+31+30+31+31+30+31+30+day;
        if(iss(dayinyear)==0)printf("yes\n");
        else printf("no\n");
        }
    }
    return 0;
}
