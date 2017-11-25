#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int nCases, i, nFeet;                  //nCases表示输入测试数据的组数，nFeet表示输入的脚数
    scanf("%d",&nCases);
    while(nCases--)
    {
        scanf("%d",&nFeet);
        if(nFeet % 2!= 0)        //有奇数脚，没有答案
            printf("0 0\n");
        else if(nFeet % 4 != 0)      //若要动物数目最少，使动物尽量有4只脚
//若要动物数目最多，使动物尽量有2只脚
            printf("%d %d\n",nFeet/4 +1, nFeet/2);
        else
            printf("%d %d\n",nFeet/4, nFeet/2);
    }
    return 0;
}
