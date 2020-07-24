#include <stdio.h>
int main()
{
	int n,i,item,max=-1,count=0,temp = 0;
	int arr[10];
	for(i = 0 ; i <10;i++)
	{
		arr[i] = 0;
	}
	scanf("%d",&n);
	for(i = 0 ; i <n;i++)
	{
		scanf("%d",&item);
		while(item)
		{
			arr[item%10]++;
			item/=10;
		}
	}
	for(i = 0 ; i < 10 ; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d: ",max);
	for(i = 0 ; i < 10 ; i++)
	{
		if(arr[i] == max)
		{
			count++;
		}
	}
	for(i = 0 ; i < 10 ; i++)
	{
		if(arr[i] == max)
		{
			if(count==1)
			{
				temp = i;
				break;
			}else{
				printf("%d ",i);
				count--;
			}
		}
	}
	for(i = temp;i<10;i++)
	{
		if(arr[i] == max)
		{
			printf("%d",i);
		}
	}
	return 0;
}
