#include<stdio.h>
int main()
{
    int year[100],month[100],day[100];
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        j=1;
        for(i=0; i<n; i++)
        {
            scanf("%d%d%d",&year[i],&month[i],&day[i]);
            if(i!=0)
            {
                if (j==1)
                {
                    if (year[i]<year[i-1])j=0;
                    else if (year[i]==year[i-1])
                    {
                        if (month[i]<month[i-1])j=0;
                        else if (month[i]==month[i-1])
                        {
                            if (day[i]<day[i-1])j=0;
                        }
                    }
                }
            }
        }
        if(j==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
