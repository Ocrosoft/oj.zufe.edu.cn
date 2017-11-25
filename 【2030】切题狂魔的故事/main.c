#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
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
    int n,i,a[1001];
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        Quicksort(a,0,n-1);
        printf("%d\n",a[n-1]+a[n-2]);
    }
    return 0;
}
