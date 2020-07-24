#include <stdio.h>

int factorsum( int number )
{
	int sum = 0;
	int i;
	if(number==1)
	{
		sum = 1;
	}else{
		for(i = 1 ;i <= number / 2;i++)
		{
			if(number%i==0)
			{
				sum += i;
			}
		}
	}
	return sum;
}
void PrintPN( int m, int n )
{
	int leap = 1; //用于确定是否存在完数 
	int i,j;
	for(i = m;i<=n;i++)
	{
		if(factorsum(i)==i)
		{
			
			int flag = 1; //用于决定是否有空格 
			leap = 0;   
			printf("%d = ",i);
			if(i==1)
			{
				printf("%d\n",1);
			}else{
				for(j = 1;j<=i/2;j++)
				{
					if(i%j==0)
					{
						if(flag)
						{
							printf("%d",j);
							flag = 0;
						}else
						{
							printf(" + %d",j);
						}
					}
				}
				printf("\n");
			}
		}
	}
	if(leap){
		printf("No perfect number");
	}
}
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
