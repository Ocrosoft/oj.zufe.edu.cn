#include<stdio.h>
int main()
{
    int a[100],temp[100];
    int n,m,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        temp[i]=a[n-m+i];//temp[0]=a[8]
    }
    for(i=0; i<n; i++)
    {
        a[n-1-i]=a[n-1-i-m];//a[9]=a[7]
    }
    for(i=0; i<m; i++)
    {
        a[i]=temp[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
