#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int a=1988,b=1,c=1;
void nextday()
{
    while(1)
    {
        if(b==2&&c==28)
        {
            b++;
            c=1;
            break;
        }
        else if((b==1||b==3||b==5||b==7||b==8||b==10)&&c==31)
        {
            b++;
            c=1;
            break;
        }
        else if((b==4||b==6||b==9||b==11)&&c==30)
        {
            b++;
            c=1;
            break;
        }
        else if(b==12&&c==31)
        {
            a++;
            b=1;
            c=1;
            break;
        }
        else
        {
            c++;
            break;
        }
    }
}
int isprime(int n)
{
    int i;
    for(i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        if(i==n-1)
        {
            return 1;
        }
    }
    return 1;
}
int main()
{
    //attention,1988 is leap year.
    while(!(a==1989&&b==12&&c==31))
    {
        int num=a*10000+b*100+c;
        nextday();
        if(isprime(num))
        {
            printf("%d\n",num);
        }
    }
    return 0;
}
