#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];    
	int max[n];   //�洢ÿ�е����ֵ 
	int min[n];   //�洢ÿ�е���Сֵ 
	int flag = 1; //ȷ���Ƿ��а��㣬û����Ϊ1������Ϊ0 
	memset(max,0,sizeof(max));   //��ʼ������ 
	memset(min,127,sizeof(min)); // ��ʼ������ 
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
				max[i] = arr[i][j];   //�ҳ��������ֵ 
			}
			if(arr[i][j] < min[j])
			{
				min[j] = arr[i][j];  //�ҳ�������Сֵ 
			}
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n;j++)
		{
			if(arr[i][j] == max[i] &&arr[i][j] == min[j])
			{
				printf("%d %d",i,j);  //�����Ӧֵ�����е�����������е���С������� 
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
