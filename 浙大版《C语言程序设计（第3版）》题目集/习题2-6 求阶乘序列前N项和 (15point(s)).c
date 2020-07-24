#include <stdio.h>
double fab(int n)
{
	int i = 1;
	int sum = 1;
	while(i<=n)
	{
		sum *= i++;
	}
	return sum;
}
int main()
{
	int n,i,sum=0;
	if(scanf("%d",&n))
	{
	for(i = 1 ; i <=n;i++)
	{
		sum += fab(i);
	}
	 printf("%d",sum);
	return 0;
	}
 } 
