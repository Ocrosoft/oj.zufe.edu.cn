#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,b,re,i,j;
    while(scanf("%d",&num)!=EOF)
    {
        re=0;
        for(a=2; a<num; a++)
        {
            for(b=2; b<num; b++)
            {
                if(a+b==num)
                {
                    if(a==2)
                    {
                        for(j=2; j<b; j++)
                        {
                            if(b%j==0)break;
                            if(j==b-1)
                            {
                                re=1;
                                goto C1;
                            }
                        }
                    }
                        else
                        {
                            for(i=2; i<a; i++)
                            {
                                if(a%i==0) break;
                                if(i==a-1)
                                {
                                    if(b==2)
                                    {
                                        re=1;
                                        goto C1;
                                    }
                                    else
                                    {
                                        for(j=2; j<b; j++)
                                        {
                                            if(b%j==0)break;
                                            if(j==b-1)
                                            {
                                                re=1;
                                                goto C1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
C1:
            if(re==1)        printf("yes\n");
            else printf("no\n");
        }
        return 0;
    }
