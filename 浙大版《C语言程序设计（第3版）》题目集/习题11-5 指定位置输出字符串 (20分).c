#include <stdio.h>
#define MAXS 10

char *match( char *s, char ch1, char ch2 )
{
	char *arr;
	arr = (char*)malloc(sizeof(char)*MAXS); //�����µ�Ԫ 
	int len = strlen(s); //ȷ���䳤��
	int locate1 = -1 ; //ȷ����һ�������ַ�ch1��λ�� 
	int locate2 = len-1; //ȷ���ڶ��������ַ�ch2��λ�� 
	int i=0,j=0;
	for(i = 0 ; i <len ;i++)
	{
		if(s[i] == ch1)
		{
			locate1 = i;
			break;  //��֤ȡ�����ǵ�һ���ַ�ch1��λ�� 
		}
	}
		for(i = 0 ; i <len ;i++)
	{
		if(s[i] == ch2)
		{
			locate2 = i;
			break;  //ȡ�ڶ����ַ�ch2��λ�� 
		}
	}
	if(locate1 !=-1 && locate1<=locate2){
		for(i = locate1;i<=locate2;i++)
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	if(locate1!=-1)
	{
		for(i = locate1,j=0; i < len;i++,j++ )
		{
			arr[j] = s[i]; 
		}
	}
	arr[j] = '\0'; //������˼�������һ���ַ�û�ҵ��Ļ���ֱ�����'\0'����������ѭ�����������һ��λ��Ϊ'\0'
	return arr;
}

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
} 
