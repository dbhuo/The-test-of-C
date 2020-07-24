#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
	char list[22] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','a','b','c','d','e','f'};
	int leap = 1 ; //确定第一个16进制出现之前是负数还是整数
	//用于存储哪些已经过滤掉的16进制数,第一个数设置一个任意数用于确定在16进之前出现的符号是否为负 
	// 如果第一个字符仍然没有改变，则说明还没遇到16进制数，若改变，则已经遇到16进制数 
	char arr[50]={'!'};
	int i = 0 ; //统计当前统计到那个字符，用于arr字符数组 
	int j;  //后面用于遍历 
	char c ;
	int sum = 0 ; //统计转化为十进制的和 
	while((c=getchar())!='#')
	{
		if(arr[0] == '!') 
		{
			if(c == '-')
			{
				leap = 0;
			}
		}
		for(j = 0 ; j < 22;j++) //遍历对应的list数组，如果在数组里面就说明是16进制数 
		{
			if(c == list[j])
			{
				arr[i++] = c;
			}
		}
	}
/*
	到此为止*arr里面存的是我们挑选出来的十六进制数
	接下来是将十六进制变成十进制 
*/
 
	int k = 0; //用于统计当前位于第几位,与16位的乘积有关 
	for(j = i-1;j>=0;j--)
	{
		if(arr[j]>='A'&&arr[j]<='F')
		{
			sum += (arr[j]-'A'+10)*pow(16,k);
		}else if (arr[j]>='a'&&arr[j]<='f')
		{
			sum += (arr[j]-'a'+10)*pow(16,k);
		}else
		{
			sum += (arr[j]-'0') * pow(16,k);
		}
		k++;
	}
	if(leap) //刚刚确定的是否为正负数 
	{
		printf("%d",sum);
	}else
	{
		printf("%d",-1*sum);
	}
	return 0;
}
