#include <stdio.h>
/*
��ʾ��  �س���ASCII��13
		���У�ASCII��10
		�ո�ASCII��32 
*/
int main()
{
	char  c;
	int letter = 0,blank = 0,digit = 0,other = 0,i;
	for(i = 0 ; i <10 ;i++)
	{
		c = getchar();
		if(c>='0'&&c<='9')
		{
			digit++;
		}else if(c==32 || c==10){
			blank++;
		}else if (c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			letter++;
		}else{
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}
