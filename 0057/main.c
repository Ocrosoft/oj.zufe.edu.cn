#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[10]= {0};
    int i=0,min,tempnum=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    min=a[0];
    for(i=0; i<10; i++)
    {
        if (abs(a[i])<min)
        {
            min=a[i];
            tempnum=i;
        }
    }
    a[tempnum]=a[9];
    a[9]=min;
    printf("%d",a[0]);
    for(i=1; i<10; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
