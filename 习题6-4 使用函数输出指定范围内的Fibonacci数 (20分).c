#include <stdio.h>
/*
tp:�����е�fab(1)��fab(2)����1�����������ʱ��ע��Ҫ������1 
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
	int count = 0;	//ͳ���Ƿ��������,�����ڣ���count = 1,����count = 0
	int flag = 1;	//ͳ���費��Ҫ�ո� 
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
