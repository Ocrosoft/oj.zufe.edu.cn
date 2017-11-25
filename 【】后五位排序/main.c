#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[20];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int j,k,temp;
    for (j=0; j<n-1; j++)
        for(k=n-5; k<n-1-j; k++)
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
    for(i=0;i<n;i++)
    {
        if(i==0)printf("%d",a[i]);
        else
        printf(" %d",a[i]);
    }
    return 0;
}
