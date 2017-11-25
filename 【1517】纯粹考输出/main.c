#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[10];
    while(1)
    {
        scanf("%s",a);
        if(a[0]=='z')break;
        switch(a[0])
        {
        case 'o':
            printf("one apple\n");
            break;
        case 't':
            if(a[1]=='w')
                printf("two apples\n");
            else if(a[1]=='h')
                printf("three apples\n");
            else
                printf("ten apples\n");
            break;
        case 'f':
            if(a[1]=='o')
                printf("four apples\n");
            else
                printf("five apples\n");
            break;
        case 's':
            if(a[1]=='i')
                printf("six apples\n");
            else
                printf("seven apples\n");
            break;
        case 'e':
            printf("eight apples\n");
            break;
        case 'n':
            printf("nine apples\n");
            break;
        }
    }
    return 0;
}
