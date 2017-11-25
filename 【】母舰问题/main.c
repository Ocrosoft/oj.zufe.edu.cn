#include<stdio.h>
#include<stdlib.h>
#define N 100001
void  Quicksort(int R[],int l,int r)
{
    int i=l,j=r,mid;
    int tmp;
    mid=R[(l+r)/2];
    while(i<=j)
    {
        while(R[j]>mid)  j--;
        while(R[i]<mid)  i++;
        if(i<=j)
        {
            tmp=R[i];
            R[i]=R[j];
            R[j]=tmp;
            i++;
            j--;
        }
    }
    if(i<r) Quicksort(R,i,r);
    if(l<j) Quicksort(R,l,j);
}
int main()
{
    int m,n;
    int i,j;
    int self[N];
    int enemy[N];
    int hurt=0;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++) scanf("%d",&enemy[i]);
    for(i=1; i<=n; i++) scanf("%d",&self[i]);
    Quicksort(enemy,1,m);
    Quicksort(self,1,n);
    j=1;
    for(i=1; i<=m; i++)
    {
        while(self[j]<=enemy[i])
            j++;
        if(j<=n) self[j]=0;
        else
        {
            printf("0");
            return 0;
        }
        j++;
    }
    for(i=1; i<=n; i++) hurt+=self[i];
    printf("%d",hurt);
    return 0;
}
