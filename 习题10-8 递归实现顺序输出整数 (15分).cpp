#include <stdio.h>

void printdigits( int n )   
{
	if(n<10)	//������ֹ��������ΪnΪ��λ����ʱ��n/10Ĭ�϶���Ϊ0 
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

