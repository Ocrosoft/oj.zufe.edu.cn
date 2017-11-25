#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    double a,b;
    int n;
    while(~scanf("%lf%lf%d",&a,&b,&n))
    {
        if(n==1)
        {
            if(a/(b+50)>2)printf("aha,you must treat me.\n");
            else printf("I am sorry.\n");
        }
        else if(n==2)
        {
            if((a/(3*b))>2)printf("aha,you must treat me.\n");
            else printf("I am sorry.\n");
        }
        else if(n==3)
        {
            if((a/(3*(b+50)))>2)printf("aha,you must treat me.\n");
            else printf("I am sorry.\n");
        }
        else
        {
            if((a/b)>2)printf("aha,you must treat me.\n");
            else printf("I am sorry.\n");
        }
    }
        return 0;
}
