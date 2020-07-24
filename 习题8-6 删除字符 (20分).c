#include <stdio.h>
#define MAXN 20
 
void delchar( char *t, char c )
{
	int len = 0; //统计原先字符串长度 
	int count = 0;//统计当前已经出现了几次c 
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
			for(j = i;j < len - count;j++) //目的是将要删除的字符移动到最后面。 
			{
				t[j] = t[j+1];
			}
		}
	}
	t[len-count] = '\0'; //注意添加一个停止位 
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
