#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char a[120];
    char b[120];
    while(gets(a)!=NULL)
    {
        strcpy(b,a);
        int sum=0;
        int sumB=0;
        int i,j;
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]=='B')
            {
                for(j=i+1; j<strlen(a); j++)
                {
                    if(a[j]=='A')
                    {
                        char temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                        sum+=j-i;
                        break;
                    }
                }
            }
        }
        for(i=0; i<strlen(b); i++)
        {
            if(b[i]=='A')
            {
                for(j=i+1; j<strlen(b); j++)
                {
                    if(b[j]=='B')
                    {
                        char temp=b[i];
                        b[i]=b[j];
                        b[j]=temp;
                        sumB+=j-i;
                        break;
                    }
                }
            }
        }
        printf("%d\n",sum>sumB?sumB:sum);
    }
    return 0;
}
