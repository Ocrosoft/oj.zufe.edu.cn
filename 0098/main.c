#include <stdio.h>
/*
һ�Ƚ�ѧ����Ҫƽ����75���ܻ�ã�����2500Ԫ
���Ƚ�ѧ����Ҫƽ����70������1500Ԫ
���Ƚ�ѧ����Ҫƽ����65������1000Ԫ
��ṱ�׽���Ҫƽ����60������800Ԫ
*/
int main()
{
    int n,i,sum=0,temp,a,b,x=0;
    int aa[100];
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=0; i<n; i++,x++)
        {
            scanf("%d",&aa[i]);
            if(aa[i]>=75)sum+=2500;
            else if(aa[i]>=70)sum+=1500;
            else if (aa[i]>=65)sum+=1000;
            else if(aa[i]>=60)sum+=800;
        }
        for (a=0; a<n-1; a++)
            for(b=0; b<n-1-a; b++)
                if(aa[b]>aa[b+1])
                {
                    temp=aa[b];
                    aa[b]=aa[b+1];
                    aa[b+1]=temp;
                }
        //if(x!=0)printf("\n");
        for(i=n-1; i>=0; i--)
        {
            printf("%d ",aa[i]);
        }
        printf("\n%d\n",sum);
    }
    return 0;
}
