#include<stdio.h>
#include<strings.h>
int main()
{
    char a[120];
    while(~scanf("%s",a))
    {
        int num=0;
        int ch=0;
        int ch2=0;
        int others=0;
        int i;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>='0'&&a[i]<='9') ++num;
            else if(a[i]>='A'&&a[i]<='Z')++ch2;
            else if(a[i]>='a'&&a[i]<='z')++ch;
            else ++others;
        }
        printf("%d %d %d %d\n",ch2,ch,num,others);
    }
    return 0;
}

