#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[8];
    int i,month;
    while(1)
    {
        gets(a);
        if(a[0]=='E')break;
        month=0;
        for(i=5;a[i]!='\0';i++)
        {
            month=month*10+(a[i]-'0');
        }
        switch(month)
        {
             case 2:
             case 3:
             case 4:
                 printf("spring\n");
                 break;
             case 5:
             case 6:
             case 7:
                printf("summer\n");
                break;
             case 8:
             case 9:
             case 10:
                printf("autumn\n");
                break;
             case 11:
             case 12:
             case 1:
                printf("winter\n");
                break;
        }

    }
    return 0;
}
