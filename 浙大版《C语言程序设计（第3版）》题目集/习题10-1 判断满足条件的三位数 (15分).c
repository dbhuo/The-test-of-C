#include <stdio.h>
#include <math.h>

int search( int n )
{
	int arr[3];     //���ڴ��뵱ǰ����ÿһλ��ֵ 
	int count = 0 ; //ͳ�Ʒ�Χ�ڵ����ж��ٷ���Ҫ����� 
	int i;
	for(i = 101;i<=n;i++)
	{
		int temp = i;  //����i��ȡi��ÿһλ��ֵ 
		int j = 0;   //���ڱ���ÿ��λ�� 
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

