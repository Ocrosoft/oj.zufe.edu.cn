#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int t2t(char *p,int n)
{
    int i;
    for(i=0; n!=0; i++)
    {
        p[i]=n%2+'0';
        n=n/2;
    }
    return i;
}

int main()
{
    int n,num,f,i,j,k;
    char a[120];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num);
        j=t2t(a,num);
        f=0;
        for(k=0; k<j; k++)
        {
            if(a[k]=='1')
            {
                if(f==0)
                {
                    printf("%d",k)  ;
                    f=1;
                }
                else
                {
                    printf(" %d",k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
