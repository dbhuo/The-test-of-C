#include <stdio.h>

void dectobin( int n )
{
	if(n==0)
	{
		printf("0");
	}else if (n==1){
		printf("1");
	}else{
		dectobin(n/2); //ֻ��0/2�Ż����0����˴˴���������n=0�ĵط� 
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
