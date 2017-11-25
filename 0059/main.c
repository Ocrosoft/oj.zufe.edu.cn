#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char a[130]= {'0'};
    while(scanf("%d",&n)!=EOF)
    {
        int i,j,f;
        for (i=0; i<n; i++)
        {
            scanf("%d",&f);
            getchar();
            gets(a);
            if (!f)
            {
                for(j=0; a[j]!='\0'; j++)
                {
                    printf("%c",a[j]);
                }
                printf("\n");
            }
            else
            {
                for(j=0; a[j]!='\0'; j++)
                {
                    if (a[j]=='z')
                    {
                        printf("a");
                    }
                    else if (a[j]=='Z')
                    {
                        printf("A");
                    }
                    else
                    {
                        if((a[j]>='a' &&a[j]<'z')||(a[j]>='A' && a[j]<'Z'))
                            printf("%c",a[j]+1);
                        else
                            printf("%c",a[j]);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
