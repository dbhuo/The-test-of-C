#include <stdio.h>
#define MAXN 20
 
void delchar( char *t, char c )
{
	int len = 0; //ͳ��ԭ���ַ������� 
	int count = 0;//ͳ�Ƶ�ǰ�Ѿ������˼���c 
	int i,j;
	while(*(t+len) != '\0')
	{
		len++;
	}
	for(i = len - 1 ; i >=0 ;i--)
	{
		if(t[i] == c)
		{
			count++;
			for(j = i;j < len - count;j++) //Ŀ���ǽ�Ҫɾ�����ַ��ƶ�������档 
			{
				t[j] = t[j+1];
			}
		}
	}
	t[len-count] = '\0'; //ע�����һ��ֹͣλ 
}
void ReadString( char s[] )
{
	gets(s);
}
int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}
