#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
//#include <string.h>
/*
 �K�K���������������������L�L
�� ������������� ��
  �J�J���������������������I�I
*/
int main()
{
    char a[200];
    int i;
    while(gets(a)!=NULL)
    {
        a[0]=toupper(a[0]);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==' ')
            {
                a[i+1]=toupper(a[i+1]);
                i++;
            }
        }
        puts(a);
    }
    return 0;
}
