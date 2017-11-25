#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char b1[27]= {'a','b','c','e','d','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char b2[27]= {'1','1','1','2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','8','8','9','9','0'};
    char s[9000]= {0};
    int num[9000]= {0};
    int i,n,j,k,m=0,p,x,y,min,minn,r;
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;
    char a,b;
    while(scanf("%d",&j)!=EOF)
    {
        m++;
        r=1;
        n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n0=0;
        getchar();
        for(k=0; k<j*8; k+=8)
        {
            scanf("%s",&s[k]);
        }
        i=0,p=1;
        printf("Case %d:\n",m);
        for(k=1; k<j+1; k++)
        {
            for(; i<8*k; i++)
            {
                for(n=0; n<26; n++)
                {
                    a=s[i],b=b1[n];
                    if (tolower(a)==b)
                    {
                        num[p]=b2[n]-'0';
                        p++;
                        if (b2[n]=='1')n1++;
                        else if (b2[n]=='2')n2++;
                        else if (b2[n]=='3')n3++;
                        else if (b2[n]=='4')n4++;
                        else if (b2[n]=='5')n5++;
                        else if (b2[n]=='6')n6++;
                        else if (b2[n]=='7')n7++;
                        else if (b2[n]=='8')n8++;
                        else if (b2[n]=='9')n9++;
                        else if (b2[n]=='0')n0++;
                        break;
                    }
                }
            }
        }
L1://¿ÉÒÔ»»Ñ­»·
        min=num[1],minn=1;
        for(x=9; x<1+(j-r+1)*8; x+=8)
        {
            if(num[x]==min)
            {
                for(y=1; num[x+y]==num[minn+y]&&y<8; y++);
                if(num[x+y]<num[minn+y])minn=x;
            }
            if(num[x]<min)
            {
                min=num[x];
                minn=x;
            }
        }
        for(y=0; y<8; y++)
        {
            printf("%d",num[minn+y]);
        }
        printf("\n");
        if(minn+8<=(j-r+1)*8)
        {
            for(y=0; (minn+y)<(j-r+1)*8; y++)
            {
                num[minn+y]=num[minn+y+8];
            }
        }
        r++;
        if(r!=j+1)goto L1;
        if (n0!=0)printf("0 %d\n",n0);
        if (n1!=0)printf("1 %d\n",n1);
        if (n2!=0)printf("2 %d\n",n2);
        if (n3!=0)printf("3 %d\n",n3);
        if (n4!=0)printf("4 %d\n",n4);
        if (n5!=0)printf("5 %d\n",n5);
        if (n6!=0)printf("6 %d\n",n6);
        if (n7!=0)printf("7 %d\n",n7);
        if (n8!=0)printf("8 %d\n",n8);
        if (n9!=0)printf("9 %d\n",n9);
        printf("\n");
    }
    return 0;
}
