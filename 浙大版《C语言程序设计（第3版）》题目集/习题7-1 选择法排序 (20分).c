#include <stdio.h>
void choiceSort(int arr[],int n)
{
	int i,j;
	for(i = 0 ; i < n ;i++)
	{
		int k = i;
		for(j = i+1;j<n;j++)
		{
			if(arr[k]<arr[j])
			{
				k = j;
			}
		}
		if(k!=i)
		{
			int temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
		}
	}
}
int main()
{
	int n ;
	scanf("%d",&n);
	int i,arr[n];
	for(i = 0 ; i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	choiceSort(arr,n);
	for(i = 0 ; i < n-1 ; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("%d",arr[n-1]);
	return 0;
} 
