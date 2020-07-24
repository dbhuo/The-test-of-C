#include <stdio.h>
#include <string.h>
int main()
{
	char arr[81];
	gets(arr);
	int len = strlen(arr);
	int i;
	for(i = 0 ; i <=(len-1)/2;i++)
	{
		char temp = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i] = temp;	
	}
	for(i = 0 ;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
