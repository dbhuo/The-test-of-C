#include <stdio.h>
#include <string.h>
#define MAX 5
int main()
{
	char arr[MAX][85];
	char temp[85];
	int i,j;
	scanf("%s %s %s %s %s",arr[0],arr[1],arr[2],arr[3],arr[4]);
	for(i = 0 ; i <MAX -1;i++)
	{
		int k = i;
		for( j =i+1; j < MAX ;j++)
		{
			if(strcmp(arr[k],arr[j]) > 0)
			{
				k = j;
			}
		}
		if( k !=i)
		{
			/*
			�о��е���ѧ��ÿ�����Ƚ�arr[i]��ֵ��temp�ڽ��н�����ÿ�ζ�������⡣ 
			*/
			strcpy(temp,arr[k]);
			strcpy(arr[k],arr[i]);
			strcpy(arr[i],temp);
		}
	}
	
	printf("After sorted:\n");
	for(i = 0 ; i < 5 ;i++)
	{
		printf("%s\n",arr[i]);
	}
	return 0;
} 
