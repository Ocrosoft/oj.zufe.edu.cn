#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int t2t(char *p,int n)
{
    int i;
    for(i=0; n!=0; i++)
    {
        p[i]=('0'+(n%2));
        n=n/2;
    }
    return i;
}
int main()
{
    int n;
    char t[100];
    int i,sum,max;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        sum=0,max=0;
        i=t2t(t,n)-1;
        for(; i!=-1; i--)
        {
            if(t[i]=='1')
            {
                sum++;
                if(sum>max)max=sum;
            }
            else
            {
                if(sum>max)max=sum;
                sum=0;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
