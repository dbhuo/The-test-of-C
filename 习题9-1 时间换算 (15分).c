#include <stdio.h>
int main()
{
	int hours,minites,seconds;
	int tempsecond; //��¼��Ҫ��ӵ����� 
	int tempminite = 0; //����������60��ʱ����������1�����ڵ��¼����ܵķ����� 
	scanf("%d:%d:%d",&hours,&minites,&seconds);
	scanf("%d",&tempsecond);
	if((tempsecond + seconds)>=60)
	{
		tempminite++;
		seconds = (tempsecond + seconds) - 60;
	}else{
		seconds += tempsecond;
	}
	if((tempminite + minites)>=60)  //�����Ӻʹ��ڵ���60��ʱ��Сʱ+1 
	{
		hours++;
		minites = (tempminite + minites) - 60;
	}else{
		minites += tempminite;
	}
	if(hours>=24) //��Сʱ���ڵ���24��ʱ�򣬽�Сʱ����Ϊ0 
	{
		hours = hours - 24; 
	}
	printf("%02d:%02d:%02d",hours,minites,seconds);
	return 0;
}
