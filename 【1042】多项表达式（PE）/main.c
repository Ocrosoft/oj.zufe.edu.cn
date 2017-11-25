#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int a[9];
    int i;
    while(1)
    {
        for(i=0; i<9; i++)
        {
            if(scanf("%d",&a[i])==EOF)
                return 0;
        }
        bool p=false,q=false;
        for(i=0; i<9; i++)
        {
            if(i==8&&p==false&&q==false&&a[i]==0)
                printf("0\n");
            if(a[i]!=0&&p==false)
            {
                p=true;
            }
            if(p==true)
            {
                if(p==true&&q==false)
                {
                    if(a[i]==1)
                        printf("x^%d",8-i);
                    else if(a[i]==0);
                    else if(a[i]==-1)
                        printf("-x^%d",8-i);
                    else if(a[i]>0)
                        printf("%dx^%d",a[i],8-i);
                    else if(a[i]<0)
                        printf("%dx^%d",a[i],8-i);
                    q=true;
                }
                else if(i==8)
                {
                    if(a[i]==1)
                        printf("+1");
                    else if(a[i]==0);
                    else if(a[i]==-1)
                        printf("-1");
                    else if(a[i]>0)
                        printf("+%d",a[i]);
                    else if(a[i]<0)
                        printf("%d",a[i]);
                }
                else if(i==7)
                {
                    if(a[i]==1)
                        printf("+x");
                    else if(a[i]==0);
                    else if(a[i]==-1)
                        printf("x");
                    else if(a[i]>0)
                        printf("+%dx",a[i]);
                    else if(a[i]<0)
                        printf("%dx",a[i]);
                }
                else
                {
                    {
                        if(a[i]==1)
                            printf("+x^%d",8-i);
                        else if(a[i]==0);
                        else if(a[i]==-1)
                            printf("-x^%d",8-i);
                        else if(a[i]>0)
                            printf("+%dx^%d",a[i],8-i);
                        else if(a[i]<0)
                            printf("%dx^%d",a[i],8-i);
                    }
                }
            }
        }
        printf("\n");
    }
}

