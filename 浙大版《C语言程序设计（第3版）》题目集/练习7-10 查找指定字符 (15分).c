#include <stdio.h>
#include <string.h>
/*
ts:�����getsǰ���������ַ����������ֵ�ʱ��\n�ᱻgets�Խ�ȥ�����ʱ����һ��getchar()���Ա���������� 
*/
int main()
{
	int index = -1,i = 0;
	char c;
	scanf("%c",&c);
	getchar();
	char arr[81];
	gets(arr);
	int len = strlen(arr);
	for(i = 0 ; i < len;i++)
	{
		if(arr[i] == c)
		{	if(i>index)
			index = i;
		}
	}
	if(index<0)
	{
		printf("Not Found"); 
	}else{
		printf("index = %d",index);
	}
	return 0;
}
