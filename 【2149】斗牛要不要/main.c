#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[100];
    int b[5];
    while(gets(a)!=NULL)
    {
        int i,j,k;
        int p=0;
        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]=='J'||a[i]=='Q'||a[i]=='K')
            {
                b[p]=10;
            }
            else if(a[i]=='1')
            {
                b[p]=10;
                i++;
            }
            else if(a[i]=='A')
            {
                b[p]=1;
            }
            else
            {
                b[p]=a[i]-'0';
            }
            p++;
        }
        p=0;
        for(i=0; i<3; i++)
        {
            for(j=i+1; j<4; j++)
            {
                for(k=j+1; k<5; k++)
                {
                    if((b[i]+b[j]+b[k])%10==0)
                    {
                        printf("Yes\n");
                        p=1;
                        break;
                    }
                }
                if(p==1)
                {
                    break;
                }
            }
            if(p==1)
            {
                break;
            }
        }
        if(p==0)
            printf("No\n");
    }
    return 0;
}
