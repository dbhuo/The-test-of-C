#include <stdio.h>

/*
tp:����ֵС��0��ʱ���޷���10ȡ�࣬
	ע������и�����һЩ����㣬�ر���0�� 
*/
int CountDigit( int number, int digit )
{
    int count = 0 ;
    if(number == 0)
    {
    	count = 1;
    	return count;
	}else if(number<0){
		number *= -1;
	}
    while(number)
    {
        int temp = number%10;
        if(temp == digit)
            count++;
        number/=10;
    }
    return count;
}


int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

