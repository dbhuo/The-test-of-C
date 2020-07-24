#include <stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int arr[n];
	scanf("%d",&arr[0]);
	int max = arr[0]; 
	for(i = 1; i <n ; i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] > max)
		{
			max = arr[i];
			count = i;
		}
	}
	printf("%d %d",max,count);
	return 0;
}
