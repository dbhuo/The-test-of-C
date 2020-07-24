#include <stdio.h>
int main()
{
	int i,num;
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	for(i = 0 ; i < 5 ; i++)
	{
		if(scanf("%d",&num))
		{
			 switch(num){
			 	case 0:return 0;break;
				case 1:printf("price = 3.00\n");break;
				case 2:printf("price = 2.50\n");break;
				case 3:printf("price = 4.10\n");break;
				case 4:printf("price = 10.20\n");break;
				default:printf("price = 0.00\n");
			}
		}
	}
	return 0;
}
