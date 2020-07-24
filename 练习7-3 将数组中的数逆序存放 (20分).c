#include <stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i<=(n-1)/2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	for(i = 0; i< n-1 ; i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("%d",arr[n-1]);
	return 0;
}
