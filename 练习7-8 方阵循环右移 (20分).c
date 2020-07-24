#include <stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d %d",&m,&n);
	int arr1[n][n];
	int arr2[n][n];
	for(i = 0; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i = 0; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			arr2[i][(j+m)%n] = arr1[i][j];
		}
	}
	for(i = 0; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
