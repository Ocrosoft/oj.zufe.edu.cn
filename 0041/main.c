#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,len;
    while(gets(s)!=NULL)
    {
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(islower(s[i]))
            s[i]=toupper(s[i]);
        else if(isupper(s[i]))
            s[i]=tolower(s[i]);
    }
    printf("%s\n",s);
    }

    return 0;
}
