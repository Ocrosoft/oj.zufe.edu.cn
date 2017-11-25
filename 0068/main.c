#include<stdio.h>
#include<string.h>
//转换代码系百度
int main()
{
    char a[100],b[50];
    int i,result = 0,k = 1,j = 0;
    while(scanf("%s",a)!=EOF)
    {
        result = 0,k = 1,j = 0;
        if (a[0]=='0') break;
        for(i = strlen(a)-1; i >= 0; i --)
        {
            if(a[i] == '1') result += 1 << (k-1);
            if(k == 4 || i == 0)
            {
                switch(result)
                {
                case 10:
                    b[j++]='A';
                    break;
                case 11:
                    b[j++]='B';
                    break;
                case 12:
                    b[j++]='C';
                    break;
                case 13:
                    b[j++]='D';
                    break;
                case 14:
                    b[j++]='E';
                    break;
                case 15:
                    b[j++]='F';
                    break;
                default:
                    b[j++]=result + '0';
                    break;
                }
                result = 0;
                k = 0;
            }
            k ++;
        }
        b[j] = '\0';
        for(i = strlen(b)-1; i >= 0; i --)
            printf("%c",b[i]);
        printf("\n");
    }
    return 0;
}
