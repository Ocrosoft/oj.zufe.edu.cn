#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int m,n,i,j,k,sum,sup=0,is;
    int a[500];
    double p[100]= {0};
    scanf("%d%d",&m,&n);
    for(i=0,k=0; i<m; i++)
    {
        for(j=0; j<n; j++,k++)
        {
            scanf("%d",&a[k]);
        }
    }
    for(i=0,k=0; i<m; i++)
    {
        sum=0;
        for(j=0; j<n; j++,k++)
        {
            sum+=a[k];
        }
        if(i==0)printf("%.2lf",1.0*sum/n);
        else printf(" %.2lf",1.0*sum/n);
    }
    printf("\n");
    for(i=0,k=0; i<n; i++)
    {
        sum=0;
        for(j=0,k=i; j<m; j++,k+=n)
        {
            sum+=a[k];
        }
        p[i]=1.0*sum/m;
    }
    for(i=0,k=0; i<m; i++)
    {
        is=1;
        for(j=0; j<n; j++,k++)
        {
            if(a[k]<p[j])
            {
                is=0;
            }
        }
        if(is==1)sup++;
    }
    for(i=0;i<n;i++)
    {
        if(i==0)printf("%.2lf",p[i]);
        else printf(" %.2lf",p[i]);
    }
    printf("\n");
    printf("%d",sup);
    return 0;
}
