#include <stdio.h>
#include <stdlib.h>
//给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以上为A 80-89分为B 70-79分为C 60-69分为D 60分以下为E
int main()
{
    int grade;
    char level;
    while(scanf("%d",&grade)!=EOF)
    {
        if (grade>=90)
            level='A';
        else if (grade>=80 && grade <=89)
            level='B';
        else if (grade >=70 && grade <=79)
            level='C';
        else if (grade >=60 && grade <=69)
            level='D';
        else if (grade <60)
            level='E';
        printf("%c\n",level);
    }
    return 0;
}
