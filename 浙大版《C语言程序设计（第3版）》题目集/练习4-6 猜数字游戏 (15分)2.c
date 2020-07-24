#include <stdio.h>
int main()
{
	int num,N;
	scanf("%d %d",&num,&N);
	int sign = 1;
	int time = 0;
	int temp;
	scanf("%d",&temp);
	while(temp>0 && time<N){
		time++;
		if(temp==num)
		{
			sign = 0;
			if(time == 1){
				printf("Bingo!\n");
			}else if(time > 3 && time <= N){
				printf("Good Guess!\n");
			}else if (time <= 3){
				printf("Lucky You!\n");
			}
			break;
		}else if(temp<num){
			printf("Too small\n");
		}else{
			printf("Too big\n");
		}
		scanf("%d",&temp);
	}
	if(sign)
	{
		printf("Game Over");
	}
	return 0;
} 
