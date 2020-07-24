#include <stdio.h>
/*
提示：  回车，ASCII码13
		换行，ASCII码10
		空格，ASCII码32 
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
