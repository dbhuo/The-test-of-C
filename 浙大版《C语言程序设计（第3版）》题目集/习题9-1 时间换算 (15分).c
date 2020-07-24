#include <stdio.h>
int main()
{
	int hours,minites,seconds;
	int tempsecond; //记录需要添加的秒数 
	int tempminite = 0; //当秒数大于60的时候可以让其加1，便于等下计算总的分钟数 
	scanf("%d:%d:%d",&hours,&minites,&seconds);
	scanf("%d",&tempsecond);
	if((tempsecond + seconds)>=60)
	{
		tempminite++;
		seconds = (tempsecond + seconds) - 60;
	}else{
		seconds += tempsecond;
	}
	if((tempminite + minites)>=60)  //当分钟和大于等于60的时候，小时+1 
	{
		hours++;
		minites = (tempminite + minites) - 60;
	}else{
		minites += tempminite;
	}
	if(hours>=24) //当小时大于等于24的时候，将小时重置为0 
	{
		hours = hours - 24; 
	}
	printf("%02d:%02d:%02d",hours,minites,seconds);
	return 0;
}
