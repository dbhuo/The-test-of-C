#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s )
{
	int len = 0; //ͳ��ԭ���ַ������� 
	while(*(t+len) != '\0')
	{
		len++;
	}
	int i,j;
	if(m > len)  //���m����ԭ���ַ������ȣ���s����Ϊ�մ� 
	{
		s[0]='\0';
	}else{
		for(j = 0,i = m-1 ; i < len ;i++,j++) //����ӵ�m��λ�ÿ�ʼ����t[i]��ֵ��ֵ��s[j],��ʱj��0��ʼ 
		{
			s[j] = t[i];
		}
		s[j] = '\0'; //���ע�⻹Ҫ��һ��ֹͣλ 
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

