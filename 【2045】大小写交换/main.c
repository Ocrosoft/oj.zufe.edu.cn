#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n,i,j;
    char a[101];
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        getchar();
        gets(a);
        for(i=0;i<n;i++)
        {
            if(isupper(a[i]))
            {
                for(j=i;j<n;j++)
                {
                    if(a[j]==tolower(a[i]))
                    {
                        char temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                        break;
                    }
                }
            }
            else if(islower(a[i]))
            {
                for(j=i;j<n;j++)
                {
                    if(a[j]==toupper(a[i]))
                    {
                        char temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                        break;
                    }
                }
            }
        }
        puts(a);
    }
    return 0;
}
