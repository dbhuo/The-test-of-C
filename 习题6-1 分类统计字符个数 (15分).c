
#include <stdio.h>
#include <string.h>
#define MAXS 15
/*
������ڿ����������math����ĺ�����û����ͷ�ļ���Ϊ����  
*/
void StringCount( char s[] )
{
	int i = 0;
	int len = strlen(s);
	int letter = 0 ;
	int blank = 0;
	int digit = 0 ;
	int other = 0;
	for(i = 0 ; i <len;i++) 
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			digit++;
		}else if(s[i] ==' '||s[i]=='\n'){
			blank++;	
		}else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
			letter++;
		}else{
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
//void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];
	gets(s);
//    ReadString(s);
    StringCount(s);

    return 0;
}
