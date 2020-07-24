#include <stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	int all[m];
	for(i = 0 ; i < m;i++)
	{
		all[i] = 0;
	}
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n;j++)
		{
			scanf("%d",&arr[i][j]);
			all[i] += arr[i][j];
		}
	}
	for(i = 0 ; i < m;i++)
	{
		printf("%d\n",all[i]);
	}
	return 0;
}
