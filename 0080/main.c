#include <stdio.h>
#include <stdlib.h>
int main()
{
    int b1,b2,b3;
    int n;
    while(scanf("%d%d%d",&b1,&b2,&b3)!=EOF)
    {
        if(b1==-1)break;
        if(b1>=3)b1%=3;
        if(b2>=5)b2%=5;
        if(b3>=7)b3%=7;
        for(n=b1;n<=100; n+=3)
        {
            if(n%5==b2&&n%7==b3)
            {
                break;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
