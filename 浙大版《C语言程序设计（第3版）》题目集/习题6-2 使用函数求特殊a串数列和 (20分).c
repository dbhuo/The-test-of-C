#include <stdio.h>
#include <math.h>
int fn( int a, int n )
{
	return a*(pow(10,n)-1)/9;
}
int SumA( int a, int n )
{
	int sum = 0;
	int i;
	for(i = 1 ; i <= n ; i++)
		sum += fn(a,i);
	return sum;
}
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

