#include <stdio.h>
#include <stdlib.h>

void del_char(char *str, char del)
{
    char *d = str;
    while (*str != '\0')//������ֹͣ.
    {
        if (*str != del)//�������ַ�����ɾ��.
        {
            *d++ = *str;//��*dλ�ø���,���һֱû��Ҫɾ���ַ�,�����Լ������Լ�.
        }
        ++str;//�Ա���һ���ַ�
    }
    *d = '\0';//�������Ͻ�����,��ӡʱ��\0����.
}
int main()
{
    char s[200],c[200];
    char* a=&s[0];
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s%s",s,c);
        for(j=0; c[j]!='\0'; j++)
        {
            del_char(a,c[j]);
        }
        printf("%s\n",s);
    }

    return 0;
}
