#include <stdio.h>
/*
switch case用法不是很熟悉 
*/
int main()
{
	int first,second;
	scanf("%d",&first);
	char c ;
	scanf("%c",&c);
	while(c!='=')
	{
		scanf("%d",&second);
		switch(c){
			case '+':first += second;break;
			case '-':first -= second;break; 
			case '/':
				{
					if(second==0) 
					{
						printf("ERROR");
						return 0;
					}else{
						first /= second;
					}
				}break;
			case '*':first *= second;break;
			default:printf("ERROR");return 0;	
		}
		scanf("%c",&c);					
	}
	printf("%d",first);
	return 0;
}
