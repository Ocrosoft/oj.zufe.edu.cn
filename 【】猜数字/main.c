#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chosen = 0;
    int guess=0;
    int count=3;
    int limit=20;
    srand(time(NULL));//设定种子
    chosen=1 + rand() % limit;//生成随机数并赋值给chosen
    printf("\n这是一个猜数字游戏.");
    printf("\n我选择了一个1~20的数字"" 你需要猜出这个数字.\n");
    for( ; count > 0 ; --count)
    {
        printf("\n你还有%d次机会.",count);
        printf("\n输入你猜的数字:");
        scanf("%d",&guess);
        if(guess == chosen)//猜对了
        {
            printf("\n恭喜.你猜对了!\n");
            return 0;
        }
          else if (guess<1||guess>20)//没有按规则输入
               printf("我说过这个数字是1~20.\n");
          else//猜错了
            printf("对不起,%d 是错误的.这个数字比你猜的要%s.\n",guess,chosen>guess?"大":"小");
              }
              printf("\n你失败了三次.正确答案是%d\n",chosen);//失败
              return 0;
}
