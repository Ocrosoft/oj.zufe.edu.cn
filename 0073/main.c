#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char a[1000],b[1000];
    int i,sum,j;
    while(1)
    {
        scanf("%s",a);
        sum=0;
        if (a[0]=='0') break;
        for(i=0; a[i]!='\0'; i++);
        i--;
        for(j=0; i>=0; i--,j++)
        {
            b[j]=a[i];
        }
        b[j+1]='\n';
        i=j;
        for(j=1; j<=i; j*=2)
        {
            sum+=(b[j-1]-'0');
        }
        printf("%d\n",sum);
    }
    return 0;
}
