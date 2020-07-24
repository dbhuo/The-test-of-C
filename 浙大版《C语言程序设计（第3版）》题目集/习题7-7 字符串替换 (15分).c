#include <stdio.h>
#include <string.h>
int main()
{
	char arr[81];
	gets(arr);
	int len = strlen(arr),i;
	for(i = 0 ; i < len;i++)
	{
		if(arr[i] >= 'A' && arr[i] <='Z')
		{
			int temp = arr[i] - 'A';
			arr[i] = (char)('A' + (25-temp));
		}
	}
	for(i = 0 ; i < len;i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
