#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t)
{
	char *news = NULL;
	int len1 = 0, len2 = 0; //�ֱ�ͳ��s�� t�ĳ��� 
	while(*(s+len1)!='\0') len1++;
	while(*(t+len2)!='\0') len2++;
	int i;
	for(i = 0 ; i < len1 ;i++)
	{
		int j = 0;      //�ж�s��t�Ƿ����
		while(s[j + i] == t[j])
		{
			j++;
		}
		if(j>=len2)  //���s����t�Ļ�����ֱ�ӷ�Χs[i]��Ӧ����ʼ��ַ ���ڵ�������s��t����������λ������ 
		{
			news = &s[i];
			return news;
		}
	}
	return news;
}
void ReadString( char s[] ) /* �����ṩ��ϸ�ڲ��� */
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
