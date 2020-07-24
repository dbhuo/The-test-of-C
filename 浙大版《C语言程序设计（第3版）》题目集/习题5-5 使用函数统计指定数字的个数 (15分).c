#include <stdio.h>

/*
tp:当数值小于0的时候无法和10取余，
	注意题干中给出的一些特殊点，特别是0点 
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

