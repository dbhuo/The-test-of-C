#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t)
{
	char *news = NULL;
	int len1 = 0, len2 = 0; //分别统计s和 t的长度 
	while(*(s+len1)!='\0') len1++;
	while(*(t+len2)!='\0') len2++;
	int i;
	for(i = 0 ; i < len1 ;i++)
	{
		int j = 0;      //判断s和t是否相等
		while(s[j + i] == t[j])
		{
			j++;
		}
		if(j>=len2)  //如果s存在t的话，则直接范围s[i]对应的起始地址 大于的作用是s和t都是在最后的位置相遇 
		{
			news = &s[i];
			return news;
		}
	}
	return news;
}
void ReadString( char s[] ) /* 裁判提供，细节不表 */
{
	gets(s);
} 

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}
