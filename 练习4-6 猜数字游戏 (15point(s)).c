#include <stdio.h>
int main()
{
	int count=0,random,guessAllCounts,guessNum,temp=1;
	scanf("%d %d",&random,&guessAllCounts);
	for(count=1;count<=guessAllCounts;count++)
	{
		scanf("%d",&guessNum);
		if(guessNum<0)
		{
			break;
		}
		if(guessNum < random)
			{
				printf("Too small\n");
			}else if(guessNum>random){
				printf("Too big\n");
			}else{
				temp=0;
				if(count==1)
				{
					printf("Bingo!\n");
					break;
				}else if(count==2||count==3){	
     				 printf("Lucky You!\n");
					break;
				}else if(count>3&&count<=guessAllCounts){
					printf("Good Guess!\n");
					break;
				}	
			}
	}
	if(temp){
		printf("Game Over\n");
	}
	return 0;
}
