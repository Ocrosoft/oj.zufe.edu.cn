#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
const int MOD=2015;
int ans[100];
char s[1000];
void init()
{
    ans[0]=1;
    int i;
    for(i=1; i<=30; i++)
        ans[i]=(i*ans[i-1])%MOD;
}
int main()
{
    init();
    while(~scanf("%s",s))
    {
        int len=strlen(s);
        if(len>2)printf("0\n");
        else if (len==1) printf("%d\n",ans[s[0]-'0']);
        else if (len==2)printf("%d\n",ans[(s[0]-'0')*10+s[1]-'0']);
    }
    return 0;
}

