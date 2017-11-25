#include<stdio.h>

int main()
{
    int y;
    while(1)
    {
        scanf("%d",&y);
        if(y==0)break;
        if(((y%100==0)&&(y%400==0))||((y%100!=0)&&(y%4==0)))
            printf("29\n");
        else
            printf("28\n");
    }
    return 0;
}
