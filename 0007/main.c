#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float a,b,c;
    float s;
    //a��ʾ���ӣ�b��ʾ��ĸ��c���м������s�Ǻ�
    while(scanf("%d",&n)!=EOF)
    {
        a=2.0;
        b=1.0;
        s=0;
        for(i=0; i<n; i++)
        {
            s=s+a/b;
            c=a;
            a=a+b;
            b=c;
        }
        printf("%.2f\n",s);
    }

    return 0;
}