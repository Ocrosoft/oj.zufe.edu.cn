#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trs(char xyz,char* abc,char* num,int numi)
{
    char a[3]= {'.','-'},b[5]= {'-','.','.','.'},c[5]= {'-','.','-','.'},d[4]= {'-','.','.'};
    char e[2]= {'.'},f[5]= {'.','.','-','.'},g[4]= {'-','-','.'},h[5]= {'.','.','.','.'};
    char i[3]= {'.','.'},j[5]= {'.','-','-','-'},k[4]= {'-','.','-'},l[5]= {'.','-','.','.'};
    char m[3]= {'-','-'},n[3]= {'-','.'},o[4]= {'-','-','-'},p[5]= {'.','-','-','.'};
    char q[5]= {'-','-','.','-'},r[4]= {'.','-','.'},s[4]= {'.','.','.'},t[2]= {'-'};
    char u[4]= {'.','.','-'},v[5]= {'.','.','.','-'},w[4]= {'.','-','-'},x[5]= {'-','.','.','-'};
    char y[5]= {'-','.','-','-'},z[5]= {'-','-','.','.'};
    char xia[5]= {'.','.','-','-'},dian[5]= {'-','-','-','.'};
    char dou[5]= {'.','-','.','-'},wen[5]= {'-','-','-','-'};
    char* px;
    if(xyz=='A')
    {
        px=&a[0];
        strcat(abc,px);
        num[numi]='2';
    }
    else if (xyz=='B')
    {
        px=&b[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='C')
    {
        px=&c[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='D')
    {
        px=&d[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='E')
    {
        px=&e[0];
        strcat(abc,px);
        num[numi]='1';
    }
    else if (xyz=='F')
    {
        px=&f[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='G')
    {
        px=&g[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='H')
    {
        px=&h[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='I')
    {
        px=&i[0];
        strcat(abc,px);
        num[numi]='2';
    }
    else if (xyz=='J')
    {
        px=&j[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='K')
    {
        px=&k[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='L')
    {
        px=&l[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='M')
    {
        px=&m[0];
        strcat(abc,px);
        num[numi]='2';
    }
    else if (xyz=='N')
    {
        px=&n[0];
        strcat(abc,px);
        num[numi]='2';
    }
    else if (xyz=='O')
    {
        px=&o[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='P')
    {
        px=&p[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='Q')
    {
        px=&q[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='R')
    {
        px=&r[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='S')
    {
        px=&s[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='T')
    {
        px=&t[0];
        strcat(abc,px);
        num[numi]='1';
    }
    else if (xyz=='U')
    {
        px=&u[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='V')
    {
        px=&v[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='W')
    {
        px=&w[0];
        strcat(abc,px);
        num[numi]='3';
    }
    else if (xyz=='X')
    {
        px=&x[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='Y')
    {
        px=&y[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='Z')
    {
        px=&z[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='_')
    {
        px=&xia[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='.')
    {
        px=&dian[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz==',')
    {
        px=&dou[0];
        strcat(abc,px);
        num[numi]='4';
    }
    else if (xyz=='?')
    {
        px=&wen[0];
        strcat(abc,px);
        num[numi]='4';
    }
}
void trs2(int xx,int s,char* xyz,char* abc,int x)//位数，位置，输出，电码，
{
    switch(xx)
    {
    case 1:
        if(abc[s]=='.')      xyz[x]='E';
        else if(abc[s]=='-') xyz[x]='T';
        break;
    case 2:
        if(abc[s]=='.'&&abc[s+1]=='-') xyz[x]='A';
        else if(abc[s]=='.'&&abc[s+1]=='.') xyz[x]='I';
        else if(abc[s]=='-'&&abc[s+1]=='-') xyz[x]='M';
        else if(abc[s]=='-'&&abc[s+1]=='.') xyz[x]='N';
        break;
    case 3:
        if(abc[s]=='-'&&abc[s+1]=='.'&&abc[s+2]=='.') xyz[x]='D';
        else if(abc[s]=='-'&&abc[s+1]=='-'&&abc[s+2]=='.') xyz[x]='G';
        else if(abc[s]=='-'&&abc[s+1]=='.'&&abc[s+2]=='-') xyz[x]='K';
        else if(abc[s]=='-'&&abc[s+1]=='-'&&abc[s+2]=='-') xyz[x]='O';
        else if(abc[s]=='.'&&abc[s+1]=='-'&&abc[s+2]=='.') xyz[x]='R';
        else if(abc[s]=='.'&&abc[s+1]=='.'&&abc[s+2]=='.') xyz[x]='S';
        else if(abc[s]=='.'&&abc[s+1]=='.'&&abc[s+2]=='-') xyz[x]='U';
        else if(abc[s]=='.'&&abc[s+1]=='-'&&abc[s+2]=='-') xyz[x]='W';
        break;
    case 4:
        if(abc[s]=='-'&&abc[s+1]=='-'&&abc[s+2]=='.'&&abc[s+3]=='.') xyz[x]='Z';
        else if(abc[s]=='-'&&abc[s+1]=='.'&&abc[s+2]=='-'&&abc[s+3]=='-') xyz[x]='Y';
        else if(abc[s]=='-'&&abc[s+1]=='.'&&abc[s+2]=='.'&&abc[s+3]=='-') xyz[x]='X';
        else if(abc[s]=='.'&&abc[s+1]=='.'&&abc[s+2]=='.'&&abc[s+3]=='-') xyz[x]='V';
        else if(abc[s]=='.'&&abc[s+1]=='-'&&abc[s+2]=='-'&&abc[s+3]=='.') xyz[x]='P';
        else if(abc[s]=='-'&&abc[s+1]=='-'&&abc[s+2]=='.'&&abc[s+3]=='-') xyz[x]='Q';
        else if(abc[s]=='.'&&abc[s+1]=='.'&&abc[s+2]=='.'&&abc[s+3]=='.') xyz[x]='H';
        else if(abc[s]=='.'&&abc[s+1]=='-'&&abc[s+2]=='-'&&abc[s+3]=='-') xyz[x]='J';
        else if(abc[s]=='.'&&abc[s+1]=='-'&&abc[s+2]=='.'&&abc[s+3]=='.') xyz[x]='L';
        else if(abc[s]=='-'&&abc[s+1]=='.'&&abc[s+2]=='.'&&abc[s+3]=='.') xyz[x]='B';
        else if(abc[s]=='-'&&abc[s+1]=='.'&&abc[s+2]=='-'&&abc[s+3]=='.') xyz[x]='C';
        else if(abc[s]=='.'&&abc[s+1]=='.'&&abc[s+2]=='-'&&abc[s+3]=='.') xyz[x]='F';
        else if(abc[s]=='.'&&abc[s+1]=='.'&&abc[s+2]=='-'&&abc[s+3]=='-') xyz[x]='_';
        else if(abc[s]=='-'&&abc[s+1]=='-'&&abc[s+2]=='-'&&abc[s+3]=='.') xyz[x]='.';
        else if(abc[s]=='.'&&abc[s+1]=='-'&&abc[s+2]=='.'&&abc[s+3]=='-') xyz[x]=',';
        else if(abc[s]=='-'&&abc[s+1]=='-'&&abc[s+2]=='-'&&abc[s+3]=='-') xyz[x]='?';
        break;
    }
    xyz[x+1]='\0';
}
int main()
{
    int n,s,x;
    char ou[500];
    char a[1000]= {'\0'},num[500]= {'\0'},in[500],num2[500]= {'\0'};
    char* pa=&a[0];
    char* pn=&num[0];
    char* po=&ou[0];
    scanf("%d",&n);
    int i,j=0,k=0,b;
    //getchar();
    for(b=0; b<n; b++,k++)
    {
        a[0]='\0',num[0]='\0',num2[0]='\0';
        scanf("%s",&in);
        j=0,s=0,x=0;
        for(i=0; in[i]!='\0'; i++,j++)
        {
            trs(in[i],pa,pn,j);
        }
        pn[i+1]='\0';
        j--;
        for(i=0; j>=0; j--,i++)
        {
            num2[i]=num[j];
        }
        for(i=0; num2[i]!='\0'; i++,x++,s+=(num2[i-1]-'0'))
        {
            trs2(num2[i]-'0',s,po,pa,x);
        }
        printf("%d: ",k+1);
        for(i=0; ou[i]!='\0'; i++)
        {
            printf("%c",ou[i]);
        }
        printf("\n");
    }

    return 0;
}
