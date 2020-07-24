#include <stdio.h>
/*
注意：在使用阶层的时候要特别小心，最好用double,太可怕了 
*/
double hierarchy(int n)
{
	int i;
	double sum=1.0;
	if(n==0)
	{
		sum=1.0;
	}else{
		for(i = 1;i<=n;i++)
		{
			sum *= i;
		}
 	}
 	return sum;
}
int main()
{
	int n,i = 0;
	double sum = 0,denominator = 1;
	if(scanf("%d",&n))
	{
		do{
			denominator = hierarchy(i);
			sum += 1.0/denominator;
			i++;
		}while(i<=n);
		printf("%.8f",sum);
	}
	return 0;
} 
