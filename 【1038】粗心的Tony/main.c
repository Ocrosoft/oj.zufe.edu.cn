#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,time_need,del_need,i,j,inp_need;
    char str_wrong[100],str_right[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&time_need);
        getchar();
        gets(str_right);
        gets(str_wrong);
        for(j=0; str_wrong[j]!='\0'; j++)
        {
            if(str_wrong[j]!=str_right[j])break;
        }
        del_need=strlen(str_wrong)-j;
        inp_need=strlen(str_right)-j;
        printf("%d\n",(del_need+inp_need)*time_need);
    }
    return 0;
}
