#include <stdio.h>
#include <string.h>

#define MAXS 10

/*
原先写法： 问题 --> 当长度不是3的倍数的时候，会出现字符的替换 
void Shift( char s[] )
{
	int len = strlen(s);
	int i;
	for(i = 0 ; i < len - 3 ;i++)
	{
		char c = s[i];
		s[i] = s[i+3];
		s[i+3] = c;
	}
}

*/
void Shift( char s[] )
{
	int len = strlen(s);
	int arr[3];
	int i,j;
	for(i = 0 ; i < 3 ;i++)
	{
		arr[i] = s[i];
	}
	for(i = 3;i<len;i++)
	{
		s[i-3] = s[i];
	}
	for(j=0,i=len-3;j<3,i<len;j++,i++)
	{
		s[i] = arr[j];
	}
}

void GetString( char s[] ) /* 实现细节在此不表 */
{
	gets(s);
}

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}
