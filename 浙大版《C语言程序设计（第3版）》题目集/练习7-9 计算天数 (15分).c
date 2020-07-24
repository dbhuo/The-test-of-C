#include <stdio.h>
int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int isleap(int n)
{
	if(n%4==0&&n%100!=0||n%400==0)
	return 1;
	else
	return 0;
}
int main()
{
	int year,month,day,sum = 0,i;
	scanf("%d/%d/%d",&year,&month,&day);
	if(isleap(year))
	{
		arr[2] = 29;
	}
	for(i = 1;i<month;i++)
	{
		sum += arr[i];
	}
	sum += day;
	printf("%d",sum);
	return 0;
}
