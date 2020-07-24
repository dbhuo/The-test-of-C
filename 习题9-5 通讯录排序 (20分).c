#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct data{
	char name[11];
	int bornNum;
	char phoneNumber[18];
}alldata;
int main()
{
	alldata *arr,temp;
	int n;
	int i,j;
	scanf("%d",&n);
	getchar();
	arr = (alldata*)malloc(sizeof(alldata)*n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%s %d %s",arr[i].name,&arr[i].bornNum,arr[i].phoneNumber);
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0;j < n-1-i;j++)
		{
			if(arr[j].bornNum > arr[j+i].bornNum)
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("%s %d %s\n",arr[i].name,arr[i].bornNum,arr[i].phoneNumber);
	}
	return 0;
}
