#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,num,n,t=0;
    while(scanf("%d",&num)!=EOF)
    {
        n=num;
        t=0;
        while (n/10!=0 || n%10!=0)
        {
            if (t==0)
                a=n%10;
            if (t==1)
                b=n%10;
            if (t==2)
                c=n%10;
            if (t==3)
                d=n%10;
            if (t==4)
                e=n%10;
            n=n/10;
            t++;
        }
        printf("%d\n",t);
        switch(t)
        {
        case 1:
            printf("%d\n",a);
            printf("%d\n",a);
            break;
        case 2:
            printf("%d %d\n",b,a);
            printf("%d%d\n",a,b);
            break;
        case 3:
            printf("%d %d %d\n",c,b,a);
            printf("%d%d%d\n",a,b,c);
            break;
        case 4:
            printf("%d %d %d %d\n",d,c,b,a);
            printf("%d%d%d%d\n",a,b,c,d);
            break;
        case 5:
            printf("%d %d %d %d %d\n",e,d,c,b,a);
            printf("%d%d%d%d%d\n",a,b,c,d,e);
            break;
        }
    }
    return 0;
}
