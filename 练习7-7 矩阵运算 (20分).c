#include <stdio.h>
int main()
{
	int n,i,j,sum= 0;
	scanf("%d",&n);
	int arr[n][n];
	for(i = 0 ; i < n ;i++)
	{
		for(j = 0 ; j < n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0 ; i < n ;i++)
		{
			for(j = 0 ; j < n;j++)
			{
				if(i==n-1||j==n-1||i+j==(n-1))
				{
					continue;
				}else{
					sum += arr[i][j]; 
				}	
			}
		}
	printf("%d",sum);
	return 0;
}
