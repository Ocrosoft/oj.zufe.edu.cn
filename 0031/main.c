#include <stdio.h>
#include <stdlib.h>
//����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 90������ΪA 80-89��ΪB 70-79��ΪC 60-69��ΪD 60������ΪE
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