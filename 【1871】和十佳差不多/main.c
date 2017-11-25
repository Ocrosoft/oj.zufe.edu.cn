#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int max,min,i,sum,maxn,minn;
    int a[7];
    char name[31];
    while(scanf("%d%d%d%d%d%d%d%s",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],name)!=EOF)
    {
        sum=0,max=a[0],min=a[0],maxn=0,minn=0;
        for(i=0; i<7; i++)
        {
            if (a[i]>max)
            {
                max=a[i];
                maxn=i;
            }
            if (a[i]<min)
            {
                min=a[i];
                minn=i;
            }
        }
        a[minn]=0;
        a[maxn]=0;
        for(i=0;i<7;i++)
        {
            sum+=a[i];
        }
        printf("%s %.2lf\n",name,1.0*sum/5);
    }
    return 0;
}
