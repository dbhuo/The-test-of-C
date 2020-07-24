#include <stdio.h>
/*
数值初始化很恨很恨重要啊。 
*/
int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number )
{
	int allsum = 0,i,count = 0;
	int temp1 = number;
	int temp2 = number;
	while(temp1)
	{
		temp1/=10;
		count++;
	}
	while(temp2)
	{
		int temp3 = temp2%10;
		int sum = 1;
		for(i = 1 ; i <= count;i++)
		{
			sum *= temp3;
		}
		allsum += sum;
		temp2 /=10 ;
	}
	if(number == allsum)
	{
		return 1;
	}
	return 0;
}
void PrintN( int m, int n )
{
	int i;
	for(i = m+1; i < n; i++)
	{
		if(narcissistic(i))
		{
			printf("%d\n",i);
		}
	}
}

