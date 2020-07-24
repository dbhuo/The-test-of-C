#include <stdio.h>
#include <string.h>
/*
ts:在使用gets的使用char数组的长度必须得是已知 
*/
int main()
{
	char arr[1001];
	gets(arr);
	int len = strlen(arr);
	int i,count=0;
	for(i = 0 ; i<len-1;i++)
	{
		if(arr[i]!=' '&&arr[i+1]==' ')
			count++;
	}
	if(arr[len-1]!=' ')
		count++;
	printf("%d",count);
	return 0;	
} 
