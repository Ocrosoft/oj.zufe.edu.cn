#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <malloc.h>
#include <queue>
#include <stack>
#include <limits.h>
#include <conio.h>
#define PI 3.1415926
using namespace std;
int a[4][4];
int target=2048;
int system(const char *string);
int sum=16;
struct point
{
    int x;
    int y;
};
point locat()//随机位置
{
    srand(time(0));
    int t=rand()%sum+1;
    point p;
    p.x=t/4;
    p.y=t%4;
    return p;
}
int cho24()//随机2或者4
{
    srand(time(0));
    if(rand()%100<30)
        return 4;
    else
        return 2;
}
void cre()//写入数组
{
    point p=locat();
    int i,j;
    int t=p.x*4+p.y;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j]==0)
                t--;
            if(t==0)
                break;
        }
        if(t==0)
            break;
    }
    a[i][j]=cho24();
    sum--;
}
void pout()//输出
{
    system("cls");
    int i,j;
    for(i=0; i<4; i++)
    {
        printf("-------------------------\n");
        for(j=0; j<4; j++)
        {
            if(a[i][j]==0)
                printf("|     ");
            else
                printf("|%4d ",a[i][j]);
        }
        printf("|\n");
    }
    printf("-------------------------\n");
    printf("\nYour Target: %d\n",target);
    printf("Use ↑↓←→ to control.\n");
    printf("Press R or r to Restart.\n");
}
void movdo()
{
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=3; j>=0; j--)
        {
            int k;
            if(a[j][i]==0)
            {
                for(k=j-1; k>=0; k--)
                {
                    if(a[k][i]!=0)
                    {
                        a[j][i]=a[k][i];
                        a[k][i]=0;
                        break;
                    }
                }
            }
        }
    }
}
void movri()
{
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=3; j>=0; j--)
        {
            int k;
            if(a[i][j]==0)
            {
                for(k=j-1; k>=0; k--)
                {
                    if(a[i][k]!=0)
                    {
                        a[i][j]=a[i][k];
                        a[i][k]=0;
                        break;
                    }
                }
            }
        }
    }
}
void movle()
{
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=0; j<4; j++)
        {
            int k;
            if(a[i][j]==0)
            {
                for(k=j+1; k<4; k++)
                {
                    if(a[i][k]!=0)
                    {
                        a[i][j]=a[i][k];
                        a[i][k]=0;
                        break;
                    }
                }
            }
        }
    }
}
void movup()
{
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=0; j<4; j++)
        {
            int k;
            if(a[j][i]==0)
            {
                for(k=j+1; k<4; k++)
                {
                    if(a[k][i]!=0)
                    {
                        a[j][i]=a[k][i];
                        a[k][i]=0;
                        break;
                    }
                }
            }
        }
    }
}
void pdup()
{
    movup();
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=0; j<3; j++)
        {
            if(a[j][i]!=0)
                if(a[j][i]==a[j+1][i])
                {
                    a[j+1][i]=0;
                    a[j][i]*=2;
                    sum++;
                }
        }
    }
    movup();
}
void pddo()
{
    movdo();
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=3; j>=0; j--)
        {
            if(a[j][i]!=0)
                if(a[j][i]==a[j-1][i])
                {
                    a[j-1][i]=0;
                    a[j][i]*=2;
                    sum++;
                }
        }
    }
    movdo();
}
void pdle()
{
    movle();
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=0; j<3; j++)
        {
            if(a[i][j]!=0)
                if(a[i][j]==a[i][j+1])
                {
                    a[i][j+1]=0;
                    a[i][j]*=2;
                    sum++;
                }
        }
    }
    movle();
}
void pdri()
{
    movri();
    int i;
    for(i=0; i<4; i++)
    {
        int j;
        for(j=3; j>=0; j--)
        {
            if(a[i][j]!=0)
                if(a[i][j]==a[i][j-1])
                {
                    a[i][j-1]=0;
                    a[i][j]*=2;
                    sum++;
                }
        }
    }
    movri();
}
void start()//开始随机两个位置出现
{
    sum=16;
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            a[i][j]=0;
        }
    }
    //memset(b,0,sizeof b);
    cre();
    cre();
    pout();
}
int main()
{
    //start();
    printf("Press R or r to Start\n");
    while(1)
    {
        int key = getch();
        if(key==82||key==114)
        {
            start();
            while(1)
            {
                int key = getch();
                if (key == 224)
                    key = getch();
                if(key==72)
                {
                    pdup(),pout(),cre(),pout();
                    if(sum==0)
                    {
                        printf("You Lose!\n");
                        printf("You may think it is strange...\n");
                        break;
                    }
                }
                else if(key==75)
                {
                    pdle(),pout(),cre(),pout();
                    if(sum==0)
                    {
                        printf("You Lose!\n");
                        printf("You may think it is strange...\n");
                        break;
                    }
                }
                else if(key==77)
                {
                    pdri(),pout(),cre(),pout();
                    if(sum==0)
                    {
                        printf("You Lose!\n");
                        printf("You may think it is strange...\n");
                        break;
                    }
                }
                else if(key==80)
                {
                    pddo(),pout(),cre(),pout();
                    if(sum==0)
                    {
                        printf("You Lose!\n");
                        printf("You may think it is strange...\n");
                        break;
                    }
                }
                else if(key==82||key==114)
                    start();
            }
        }
    }
    return 0;
}
