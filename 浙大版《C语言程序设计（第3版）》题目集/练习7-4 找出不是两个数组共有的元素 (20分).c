#include <stdio.h>
#define MAXS 20
void sort(int arr[],int n)
{
	int i,j;
	for(i = 0 ; i < n ; i++)
	{
		int k = i;
		for(j =i+1;j < n;j++)
		{
			if(arr[k] > arr[j])
			{
				k = j;
			}
		}
		if(k!=i)
		{
			int temp = arr[k];
			arr[k] = arr[i];
			arr[i] = temp;
		}
	}
}
int main()
{
	int n1,n2;
	int arr1[MAXS];
	int arr2[MAXS];
	int i,j,k;
	int leap = 1;
	scanf("%d",&n1);
	for(i = 0 ; i < n1 ;i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&n2);
	for(i = 0 ; i < n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	sort(arr1,n1);
	sort(arr2,n2);
	int arr3[MAXS+MAXS];
	i=0,j=0,k=0;
	while(i<n1&&j<n2)
	{
		if(arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
		}else if(arr1[i]>arr2[j]){
			arr3[k++] = arr1[j++];
		}
	}
	while(i<n1)
	{
		arr3[k++] = arr1[i++];
	}
	while(j<n2)
	{
		arr3[k++] = arr1[j++];
	}
	
	for(i = 0 ; i <n1+n2;i++)
	{
		printf("%d ",arr3[i]);
	}
	
	return 0;
}
