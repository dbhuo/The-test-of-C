#include <stdio.h>
/*
tp:问题中的fab(1)和fab(2)都是1，所以输出的时候注意要有两个1 
*/
int fib( int n )
{
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
void PrintFN( int m, int n )
{
	int i = 1;
	int count = 0;	//统计是否存在完数,若存在，则count = 1,否则count = 0
	int flag = 1;	//统计需不需要空格 
	while(fib(i)<m)
	{
		i++;
	}
	while(fib(i)<=n)
		{
			if(flag)
			{
				printf("%d",fib(i));
				count = 1;
				flag = 0;
			}else{
				printf(" %d",fib(i));
			}
			i++;
		}
	if(count == 0)
	{
		printf("No Fibonacci number");
	}
}	
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
