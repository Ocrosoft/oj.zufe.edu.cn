#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int x,y;
    int is,i;
    char a[120];
    while(1)
    {
        gets(a);
        if(a[0]=='E')break;
        x=0,y=0,is=0;
        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]=='W')y+=1;
            else if (a[i]=='S')y-=1;
            else if (a[i]=='A')x-=1;
            else if (a[i]=='D')x+=1;
            if((x==5&&y==0)||(x==0&&y==5)||(x==0&&y==-5)||(x==-5&&y==0))
            {
                is=1;
                break;
            }
        }
        if(is==1)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
