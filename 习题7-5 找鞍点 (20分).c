#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];    
	int max[n];   //存储每行的最大值 
	int min[n];   //存储每列的最小值 
	int flag = 1; //确定是否有鞍点，没有则为1，有则为0 
	memset(max,0,sizeof(max));   //初始化数组 
	memset(min,127,sizeof(min)); // 初始化数组 
	int i ,j;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			if(arr[i][j] > max[i])
			{
				max[i] = arr[i][j];   //找出行中最大值 
			}
			if(arr[i][j] < min[j])
			{
				min[j] = arr[i][j];  //找出列中最小值 
			}
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n;j++)
		{
			if(arr[i][j] == max[i] &&arr[i][j] == min[j])
			{
				printf("%d %d",i,j);  //如果对应值是行中的最大并且是列中的最小，则输出 
				flag = 0;
			}
		}
	}
	if(flag)
	{
		printf("NONE");
	}
	return 0;
}
