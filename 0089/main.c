#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int num[5][5];
    int i,j,x,y,temp;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    scanf("%d%d",&x,&y);
    if(x>=0&&x<=4&&y>=0&&y<=4)
    {
        for(i=0; i<5; i++)
        {
            temp=num[x][i];
            num[x][i]=num[y][i];
            num[y][i]=temp;
        }
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(j==0)printf("%d",num[i][j]);
                else
                printf(" %d",num[i][j]);
            }
            printf("\n");
        }
    }
    else printf("error\n");
    return 0;
}
