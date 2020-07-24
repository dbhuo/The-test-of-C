#include <stdio.h>
/*
注： 在编写代码的时候，能用double尽量别用float,因为float容易丢失位数
	 其次在使用整数乘除结果小数的时候，尽量将输入设置为浮点数 
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
