#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,k,t,zz[10]= {0};
    for (int n=0; n<10; n++)
    {
        printf(":",n+1);
        scanf("%d",&zz[n]);
    }

    for (a=9; a>=0; a--)
    {
        k=a;
        for(b=a-1; b>=0; b--)
            if (zz[b]>zz[k])
                k=b;
        if (k!=a)
            t=zz[a];
        zz[a]=zz[k];
        zz[k]=t;
    }
    for(int n=0; n<10; n++)
        printf("%d ",zz[n]);
    return 0;
}
