#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N;
    int i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int n;
        int PW[120];
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&PW[j]);
        }
        int user,passw;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&user,&passw);
            if(PW[user]==passw)
            {
                printf("Welcome\n");
            }
            else
            {
                printf("Login failed\n");
            }
        }
        printf("\n");
    }
    return 0;
}
