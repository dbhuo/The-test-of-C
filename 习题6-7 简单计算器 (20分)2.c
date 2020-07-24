#include <stdio.h>
int main()
{
	int first ;
	scanf("%d",&first);
	char c ;
	scanf("%c",&c);	
	while(c!='=')
	{
		 int second;
		 scanf("%d",&second);
		 switch(c)
		 {
		 	case '+' : first+=second;break;
		 	case '-' : first-=second;break;
		 	case '*' : first*=second;break;
		 	case '/' :
		 		{
		 			if(second=='0')
					 {
					 	printf("ERROR");
					 	return 0;
					 }else{
					 	first/=second;
					 }	
				};break;
			default:
				{
					printf("ERROR");
					return 0;
				}
			 
		 }
		scanf("%c",&c);	 			 
	}
	printf("%d",first);
	return 0;
}
