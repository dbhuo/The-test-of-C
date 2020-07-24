#include <stdio.h>

void printdigits( int n )   
{
	if(n<10)	//函数终止条件，因为n为个位数的时候n/10默认都会为0 
	{
		printf("%d\n",n);
	}else{
		printdigits(n/10);  
		printf("%d\n",n%10); 
	}
}

int main()
{
    int n;
	
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

