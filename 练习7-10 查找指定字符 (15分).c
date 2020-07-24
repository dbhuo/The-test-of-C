#include <stdio.h>
#include <string.h>
/*
ts:如果在gets前面有输入字符或者是数字的时候，\n会被gets吃进去，这个时候多加一个getchar()可以避免这个尴尬 
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
