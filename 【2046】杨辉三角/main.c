#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//Ñî»ÔÈý½Ç²»»á°¡¡£¡£¡£
int main()
{
    int i,j;
    float sum;
    int n;
    int yh;
    while(~scanf("%d",&n))
    {
        for (i=0; i<n; ++i)
        {
            for (j=0; j<=i; ++j)
            {
                if (j==0)
                    sum = 1;
                else
                    sum *= 1.0*((i+1)-j)/j;
                yh = (int)sum;
                if(j==0)printf("%d",yh);
                else
                    printf(" %d",yh);
            }
            printf("\n");
        }
    }

    return 0;
}
