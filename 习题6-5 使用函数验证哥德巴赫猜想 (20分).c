#include <stdio.h>
#include <math.h>

/*
tp:主要还是题意没有看清楚 
*/ 
int prime( int p )
{
	if(p<2){
		return 0;
	}else{
		int i ;
		int len = sqrt(p);
		for(i = 2 ; i<=len;i++)
		{
			if(p%i==0){
				return 0;
			}
		}
	}
	return 1;	
} 
void Goldbach( int n )
{
	int i;
	int len = sqrt(n);
	for(i = 2; i <=n/2;i++)
	{
		if(prime(i))
		{
			int temp = n - i;
			if(prime(temp))
			{
				printf("%d=%d+%d",n,i,temp);
				break;
			}
		}
	}
}

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

