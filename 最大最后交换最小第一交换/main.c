#include<stdio.h>
int main()
{
    int i,j=0,k=0,max,min,a[10],temp1,temp2;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    temp1=a[0],temp2=a[9],min=a[0],max=a[0];
    for(i=1; i<10; i++)
    {
        if(max<=a[i])
        {
            max=a[i];
            j=i;
        }
        if(min>=a[i])
        {
            min=a[i];
            k=i;
        }
    }
    a[j]=a[9];
    a[9]=max;
    a[k]=a[0];
    a[0]=min;
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
