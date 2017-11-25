#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int n;
void strrebuild(int *a,int i)
{
    int j;
    for(j=i; j<n-1; j++)
    {
        a[j]=a[j+1];
    }
}
void sort(int*a)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
int main()
{
    int i,j;
    int a[120];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                strrebuild(a,j);
                n--;
                j--;
            }
        }
    }
    sort(a);
    printf("%d\n",n);
    for(i=0; i<n; i++)
    {
        if(i==0)printf("%d",a[i]);
        else
            printf(" %d",a[i]);
    }
    return 0;
}
