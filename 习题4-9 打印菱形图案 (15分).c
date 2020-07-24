#include <stdio.h>
int main()
{
	int n;
	int i,j,k;
	scanf("%d",&n);
	for(i = 0 ; i <= n/2 ; i++)
	{
		for(j = n-1-2*i;j>0;j--)
		{
			printf(" ");
		}
		for(k = 1;k<=2*i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i = 1 ; i <= n/2 ; i++)
	{
		for(j = 1 ; j <= 2*i ;j++)
		{
			printf(" ");
		}
		for(k = n-2*i ; k >=1;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;	
}
