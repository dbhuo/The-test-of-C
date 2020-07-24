#include <stdio.h>
#include <stdbool.h>
/*
提示：21世纪年份 2001-2100 
*/
bool leap(int n)
{
	if((n%100!=0&&n%4==0 )|| n%400==0)
	{
		return true;
	}
	return false;
}
int main()
{
	int n,i,count = 1;
	if(scanf("%d",&n))
	{
		if(n<=2000||n>2100){
			printf("Invalid year!");
			return 0;
		} else{
			for(i = 2001; i<=n;i++)
			{
				if(leap(i))
				{	count = 0;
					printf("%d\n",i);
				}
			}
		}
	}
	if(count)
	{
		printf("None");	
	}
	return 0;
}
