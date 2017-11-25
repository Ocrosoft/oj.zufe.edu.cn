#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int cow_age[4] = {0, 0, 0, 1};
    int i,n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        cow_age[3]= 1;
        cow_age[2] = 0;
        cow_age[1] = 0;
        cow_age[0] = 0;
        for(i=1; i<n; i++)
        {
            cow_age[3]+= cow_age[2];
            cow_age[2] = cow_age[1];
            cow_age[1] = cow_age[0];
            cow_age[0] = cow_age[3];
        }
        printf("%d\n",cow_age[3]+cow_age[2]+cow_age[1]+cow_age[0]);
    }
    return 0;
}
