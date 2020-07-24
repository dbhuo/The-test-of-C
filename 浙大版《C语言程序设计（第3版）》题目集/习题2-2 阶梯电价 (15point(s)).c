#include <stdio.h>
int main()
{
	int n;
	double sum = 1.0;
	if(scanf("%d",&n))
	{
		if(n<0)
		{
			printf("Invalid Value!");
			return 0;	
		}else if (n <=50)
		{
			sum = n*0.53;	
		}else
		{
			sum = 50*0.53+(n-50)*0.58;	
		} 
		printf("cost = %.2f",sum);
	}	
	return 0;
}
