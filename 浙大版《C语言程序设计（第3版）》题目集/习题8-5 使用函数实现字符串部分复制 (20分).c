#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s )
{
	int len = 0; //统计原先字符串长度 
	while(*(t+len) != '\0')
	{
		len++;
	}
	int i,j;
	if(m > len)  //如果m大于原先字符串长度，则将s设置为空串 
	{
		s[0]='\0';
	}else{
		for(j = 0,i = m-1 ; i < len ;i++,j++) //否则从第m个位置开始，将t[i]的值赋值给s[j],此时j从0开始 
		{
			s[j] = t[i];
		}
		s[j] = '\0'; //最后注意还要加一个停止位 
	}
}
void ReadString( char s[] )
{
	gets(s);
}

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

