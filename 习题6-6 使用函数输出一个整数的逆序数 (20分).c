#include <stdio.h>
int reverse( int number )
{
	if(number == 0)
		return 0;
	int arr[10];	//���ڴ洢����ÿһλ��ֵ 
	int flag;		//�ж����������Ǹ��� 
	int sum = 0;	//���ڼ��������ת��ĺ� 
	int i = 0;  //�����з�0�����������Ӧ�������� 
	int count; //ͳ�Ʒ�0���� 
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

