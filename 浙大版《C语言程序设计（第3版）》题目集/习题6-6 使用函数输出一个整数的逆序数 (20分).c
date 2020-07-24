#include <stdio.h>
int reverse( int number )
{
	if(number == 0)
		return 0;
	int arr[10];	//用于存储数中每一位的值 
	int flag;		//判断是正数还是负数 
	int sum = 0;	//用于计算各个逆转后的和 
	int i = 0;  //数组中非0的数存入道对应的数组中 
	int count; //统计非0个数 
	int j;
	if(number < 0)
	{
		flag = -1;
		number = -number;
	}else{
		flag = 1;
	}
	while(number%10==0)
	{
		number/=10;
	}
	while(number)
	{
		int temp = number%10;
			arr[i++] = temp;
		number/=10;
	} 
	count = i - 1;
	for(j = 0 ; j < i ;j++)
	{
		sum += arr[j]*pow(10,count);
		count--;
	}
	if(flag<0)
	sum = -sum;
	return sum;
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

