#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max=0,min=100,i,sum=0,maxn,minn,b,temp;
    int aa[20]= {0};
    while(scanf("%d",&n)!=EOF)
    {
        sum=0,max=0,min=100;
        if (n==0) break;
        for(i=0; i<n; i++)
        {
            scanf("%d",&aa[i]);
            if (aa[i]>max)
            {
                max=aa[i];
                maxn=i;
            }
            if (aa[i]<min)
            {
                min=aa[i];
                minn=i;
            }
        }
        aa[minn]=0;
        aa[maxn]=0;
        int a=0;
        for (; a<20; a++)
            for(b=0; b<18-a; b++)
                if(aa[b]<aa[b+1])
                {
                    temp=aa[b];
                    aa[b]=aa[b+1];
                    aa[b+1]=temp;
                }
                int s=0;
        for(; s<n-2; s++)
        {
            sum+=aa[s];
        }
        printf("%.2f\n",(1.0*sum/(n-2)));
    }
    return 0;
}
