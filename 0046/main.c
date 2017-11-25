#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,max,i,j,a,b;
    int s[6][6];
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        scanf("%d",&s[0][0]);
        printf("%d 1 1",s[0][0]);
    default:
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                scanf("%d",&s[i][j]);
            }
        max=s[0][0];
        a=0,b=0;
        for(i=0; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                if (abs(s[i][j])>abs(max))
                {
                    max=s[i][j];
                    a=i,b=j;
                }

            }
        }
        printf("%d %d %d",max,a+1,b+1);

    }


    return 0;
}
