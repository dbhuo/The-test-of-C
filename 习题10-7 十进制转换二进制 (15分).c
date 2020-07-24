#include <stdio.h>

void dectobin( int n )
{
	if(n==0)
	{
		printf("0");
	}else if (n==1){
		printf("1");
	}else{
		dectobin(n/2); //只有0/2才会等于0，因此此处不会跳到n=0的地方 
		printf("%d",n%2);
	}
}

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}
