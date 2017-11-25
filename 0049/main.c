#include <stdio.h>

int main()
{
	char a[10],b[10],c[20];
	int i,j;
	gets(a);
	gets(b);
	i=j=0;
	while (a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	while (b[j]!='\0')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	c[i]='\0';
	printf("%s",c);

	return 0;
}
