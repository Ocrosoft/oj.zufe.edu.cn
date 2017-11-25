#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int count1,count;
int algo(int a)
{
    if(a==1)
        return 1;
    else
    {
        count++;
        if(a%2==0)
            return algo(a/2);
        else
            return algo(3*a+1);
    }
}
int main()
{
    int i,j,k;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        printf("%d %d ",i,j);
        if(i>j)//why when i>j,change i,j?system will input data like this? can't understand.
        {//after test,system really input wrong data...because[Given any two numbers i and j]...feel be kenged...
            int tem=i;
            i=j;
            j=tem;
        }
        count1=1;
        for(k=i; k<=j; k++)
        {
            count=1;
            algo(k);
            count1=count1>count?count1:count;
        }
        printf("%d\n",count1);
    }
    return 0;
}
