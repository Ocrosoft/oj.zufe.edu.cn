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
    int n,i,j;
    int a[1001],b[1001];
    while(~scanf("%d",&n))
    {
        if(n==0)break;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n; i++)
            scanf("%d",&b[i]);
        Quicksort(a,0,n-1);
        Quicksort(b,0,n-1);
        int sum=0;
        bool p=false;
        for(i=n-1,j=i; i>=0; i--)
        {
            for(j=i; j>=0; j--)
            {
                if(a[i]>b[j]&&!(b[j]==0))
                {
                    sum++;
                    b[j]=0;
                    if(sum>n/2)
                        p=true;
                    break;
                }
            }
            if(p==true)break;
        }
        if(p==true)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
