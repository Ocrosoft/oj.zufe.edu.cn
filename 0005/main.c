#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    int A=0,P=0,N=0;
    while(scanf("%d",&grade)!=EOF)
    {
        if (grade<=0)
            break;
        if (grade>=85)
            A+=1;
        else if (grade>=60 && grade<=84)
            P+=1;
        else if (grade<=60)
            N+=1;
    }
    printf(">=85:%d\n60-84:%d\n<60:%d",A,P,N);
    return 0;
}
