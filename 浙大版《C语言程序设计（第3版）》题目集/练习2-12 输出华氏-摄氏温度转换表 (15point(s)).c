#include <stdio.h>
/*
ע�� �ڱ�д�����ʱ������double��������float,��Ϊfloat���׶�ʧλ��
	 �����ʹ�������˳����С����ʱ�򣬾�������������Ϊ������ 
*/ 
int main()
{
	int lower,upper;
	int i;
	if(scanf("%d %d",&lower,&upper))
	{
		if(lower>100||upper>100)
		{
			printf("Invalid.");
		}else if(lower>upper){
			printf("Invalid.");
		}else{
			printf("fahr celsius\n");
			for(i = lower;i <= upper;i+=2)
			{
			double c = 5.0 *(i -32)/9.0;
			printf("%d%6.1f\n",i,c);
			}
		}
	}
	return 0;
} 
