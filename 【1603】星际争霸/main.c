#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
char worldnext[120][120];
char p[120][120];
void craft(int a,int b)//矩阵,行数,列数
{
    int i,j;
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            worldnext[i][j]=p[i][j];
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            switch(p[i][j])
            {
            case 'R':
            {
                if(i==0)//first line,cal right&down&left
                {
                    if(j==b-1)//last of line,cal down&left
                    {
                        if(p[i+1][j]=='S')
                        {
                            worldnext[i+1][j]='R';
                        }
                        if(p[i][j-1]=='S')
                        {
                            worldnext[i][j-1]='R';
                        }
                    }
                    else if(j==0)//first of line,cal down&right
                    {
                        if(p[i+1][j]=='S')
                        {
                            worldnext[i+1][j]='R';
                        }
                        if(p[i][j+1]=='S')
                        {
                            worldnext[i][j+1]='R';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='S')
                        {
                            worldnext[i][j+1]='R';
                        }
                        if(p[i+1][j]=='S')
                        {
                            worldnext[i+1][j]='R';
                        }
                        if(p[i][j-1]=='S')
                        {
                            worldnext[i][j-1]='R';
                        }
                    }
                }
                else if(i==a-1)//last line,cal up&right&left
                {
                    if(j==b-1)//last of line,cal left&up
                    {
                        if(p[i-1][j]=='S')
                        {
                            worldnext[i-1][j]='R';
                        }
                        if(p[i][j-1]=='S')
                        {
                            worldnext[i][j-1]='R';
                        }
                    }
                    else if(j==0)//first of line,cal up&right
                    {
                        if(p[i-1][j]=='S')
                        {
                            worldnext[i-1][j]='R';
                        }
                        if(p[i][j+1]=='S')
                        {
                            worldnext[i][j+1]='R';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='S')
                        {
                            worldnext[i][j+1]='R';
                        }
                        if(p[i-1][j]=='S')
                        {
                            worldnext[i-1][j]='R';
                        }
                        if(p[i][j-1]=='S')
                        {
                            worldnext[i][j-1]='R';
                        }
                    }
                }
                else//cal up&down&left&right
                {
                    if(j==b-1)//last of line,cal left&up&down
                    {
                        if(p[i-1][j]=='S')
                        {
                            worldnext[i-1][j]='R';
                        }
                        if(p[i][j-1]=='S')
                        {
                            worldnext[i][j-1]='R';
                        }
                        if(p[i+1][j]=='S')
                        {
                            worldnext[i+1][j]='R';
                        }
                    }
                    else if(j==0)//first of line,cal up&right&down
                    {
                        if(p[i-1][j]=='S')
                        {
                            worldnext[i-1][j]='R';
                        }
                        if(p[i][j+1]=='S')
                        {
                            worldnext[i][j+1]='R';
                        }
                        if(p[i+1][j]=='S')
                        {
                            worldnext[i+1][j]='R';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='S')
                        {
                            worldnext[i][j+1]='R';
                        }
                        if(p[i-1][j]=='S')
                        {
                            worldnext[i-1][j]='R';
                        }
                        if(p[i][j-1]=='S')
                        {
                            worldnext[i][j-1]='R';
                        }
                        if(p[i+1][j]=='S')
                        {
                            worldnext[i+1][j]='R';
                        }
                    }
                }
                break;
            }
            case 'S':
            {
                if(i==0)//first line,cal right&down&left
                {
                    if(j==b-1)//last of line,cal down&left
                    {
                        if(p[i+1][j]=='P')
                        {
                            worldnext[i+1][j]='S';
                        }
                        if(p[i][j-1]=='P')
                        {
                            worldnext[i][j-1]='S';
                        }
                    }
                    else if(j==0)//first of line,cal down&right
                    {
                        if(p[i+1][j]=='P')
                        {
                            worldnext[i+1][j]='S';
                        }
                        if(p[i][j+1]=='P')
                        {
                            worldnext[i][j+1]='S';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='P')
                        {
                            worldnext[i][j+1]='S';
                        }
                        if(p[i+1][j]=='P')
                        {
                            worldnext[i+1][j]='S';
                        }
                        if(p[i][j-1]=='P')
                        {
                            worldnext[i][j-1]='S';
                        }
                    }
                }
                else if(i==a-1)//last line,cal up&right&left
                {
                    if(j==b-1)//last of line,cal left&up
                    {
                        if(p[i-1][j]=='P')
                        {
                            worldnext[i-1][j]='S';
                        }
                        if(p[i][j-1]=='P')
                        {
                            worldnext[i][j-1]='S';
                        }
                    }
                    else if(j==0)//first of line,cal up&right
                    {
                        if(p[i-1][j]=='P')
                        {
                            worldnext[i-1][j]='S';
                        }
                        if(p[i][j+1]=='P')
                        {
                            worldnext[i][j+1]='S';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='P')
                        {
                            worldnext[i][j+1]='S';
                        }
                        if(p[i-1][j]=='P')
                        {
                            worldnext[i-1][j]='S';
                        }
                        if(p[i][j-1]=='P')
                        {
                            worldnext[i][j-1]='S';
                        }
                    }
                }
                else//cal up&down&left&right
                {
                    if(j==b-1)//last of line,cal left&up&down
                    {
                        if(p[i-1][j]=='P')
                        {
                            worldnext[i-1][j]='S';
                        }
                        if(p[i][j-1]=='P')
                        {
                            worldnext[i][j-1]='S';
                        }
                        if(p[i+1][j]=='P')
                        {
                            worldnext[i+1][j]='S';
                        }
                    }
                    else if(j==0)//first of line,cal up&right&down
                    {
                        if(p[i-1][j]=='P')
                        {
                            worldnext[i-1][j]='S';
                        }
                        if(p[i][j+1]=='P')
                        {
                            worldnext[i][j+1]='S';
                        }
                        if(p[i+1][j]=='P')
                        {
                            worldnext[i+1][j]='S';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='P')
                        {
                            worldnext[i][j+1]='S';
                        }
                        if(p[i-1][j]=='P')
                        {
                            worldnext[i-1][j]='S';
                        }
                        if(p[i][j-1]=='P')
                        {
                            worldnext[i][j-1]='S';
                        }
                        if(p[i+1][j]=='P')
                        {
                            worldnext[i+1][j]='S';
                        }
                    }
                }
                break;
            }
            case 'P':
            {
                if(i==0)//first line,cal right&down&left
                {
                    if(j==b-1)//last of line,cal down&left
                    {
                        if(p[i+1][j]=='R')
                        {
                            worldnext[i+1][j]='P';
                        }
                        if(p[i][j-1]=='R')
                        {
                            worldnext[i][j-1]='P';
                        }
                    }
                    else if(j==0)//first of line,cal down&right
                    {
                        if(p[i+1][j]=='R')
                        {
                            worldnext[i+1][j]='P';
                        }
                        if(p[i][j+1]=='R')
                        {
                            worldnext[i][j+1]='P';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='R')
                        {
                            worldnext[i][j+1]='P';
                        }
                        if(p[i+1][j]=='R')
                        {
                            worldnext[i+1][j]='P';
                        }
                        if(p[i][j-1]=='R')
                        {
                            worldnext[i][j-1]='P';
                        }
                    }
                }
                else if(i==a-1)//last line,cal up&right&left
                {
                    if(j==b-1)//last of line,cal left&up
                    {
                        if(p[i-1][j]=='R')
                        {
                            worldnext[i-1][j]='P';
                        }
                        if(p[i][j-1]=='R')
                        {
                            worldnext[i][j-1]='P';
                        }
                    }
                    else if(j==0)//first of line,cal up&right
                    {
                        if(p[i-1][j]=='R')
                        {
                            worldnext[i-1][j]='P';
                        }
                        if(p[i][j+1]=='R')
                        {
                            worldnext[i][j+1]='P';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='R')
                        {
                            worldnext[i][j+1]='P';
                        }
                        if(p[i-1][j]=='R')
                        {
                            worldnext[i-1][j]='P';
                        }
                        if(p[i][j-1]=='R')
                        {
                            worldnext[i][j-1]='P';
                        }
                    }
                }
                else//cal up&down&left&right
                {
                    if(j==b-1)//last of line,cal left&up&down
                    {
                        if(p[i-1][j]=='R')
                        {
                            worldnext[i-1][j]='P';
                        }
                        if(p[i][j-1]=='R')
                        {
                            worldnext[i][j-1]='P';
                        }
                        if(p[i+1][j]=='R')
                        {
                            worldnext[i+1][j]='P';
                        }
                    }
                    else if(j==0)//first of line,cal up&right&down
                    {
                        if(p[i-1][j]=='R')
                        {
                            worldnext[i-1][j]='P';
                        }
                        if(p[i][j+1]=='R')
                        {
                            worldnext[i][j+1]='P';
                        }
                        if(p[i+1][j]=='R')
                        {
                            worldnext[i+1][j]='P';
                        }
                    }
                    else
                    {
                        if(p[i][j+1]=='R')
                        {
                            worldnext[i][j+1]='P';
                        }
                        if(p[i-1][j]=='R')
                        {
                            worldnext[i-1][j]='P';
                        }
                        if(p[i][j-1]=='R')
                        {
                            worldnext[i][j-1]='P';
                        }
                        if(p[i+1][j]=='R')
                        {
                            worldnext[i+1][j]='P';
                        }
                    }
                }
            }
            }
        }
    }
    for(i=0; i<a; i++)//next day
    {
        for(j=0; j<b; j++)
        {
            p[i][j]=worldnext[i][j];
        }
    }
}
int main()
{
    int N;
    int i,j,k;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        int a,b,n;//行数,列数,天数
        char t;
        scanf("%d%d%d",&a,&b,&n);
        for(j=0; j<a; j++)
        {
            getchar();
            for(k=0; k<b; k++)
            {
                t=getchar();
                if(t!='\n')
                    p[j][k]=t;
            }
        }
        for(j=0; j<n; j++)//craft
        {
            craft(a,b);
        }
        for(j=0; j<a; j++) //output
        {
            for(k=0; k<b; k++)
            {
                printf("%c",p[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
