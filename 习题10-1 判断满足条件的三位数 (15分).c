#include <stdio.h>
#include <math.h>

int search( int n )
{
	int arr[3];     //用于存入当前数字每一位的值 
	int count = 0 ; //统计范围内的数有多少符合要求的数 
	int i;
	for(i = 101;i<=n;i++)
	{
		int temp = i;  //代替i来取i中每一位的值 
		int j = 0;   //用于遍历每个位置 
		while(temp)
		{
			arr[j++] = temp%10;
			temp /=10;	
		}	
			if(arr[0]==arr[1]||arr[0]==arr[2]||arr[1]==arr[2])
			{
				for(j=10;j<=32;j++)
				{
					if(i==pow(j,2))
					{
						count++;
					}
				}
			}
	}
	return count;
}

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}

