#include <stdio.h>

void pyramid( int n )
{
	int i,j,k;
	for(i = 1 ; i <= n ;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k = 1;k<=i;k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	} 
} 

int main()
{    
    int n;
    scanf("%d", &n);
    pyramid(n);

    return 0;
}
