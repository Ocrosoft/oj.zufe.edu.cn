#include <stdio.h>
#include <string.h>
//倒序输出
int  main()
{
    char str[100];
    int n, i;
    scanf("%s", str);
    n = strlen(str);
    for (i = n - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
//反转后输出
/*
#include <stdio.h>
#include <string.h>
void main()
{
	char str[100], ch;
	int i, j;
	printf("Input a string:");
	gets(str);
	i = 0;
	j = strlen(str) - 1;
	while (i < j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i++;
		j--;
	}
	printf("The reversed string:");
	puts(str);
}*、
