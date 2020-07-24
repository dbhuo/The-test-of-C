#include <stdio.h>
#include <math.h> 
struct label{
	double x;
	double y;
};
int main()
{
	struct label lb1;
	struct label lb2;
	struct label lb3;
	scanf("%lf %lf %lf %lf",&lb1.x,&lb1.y,&lb2.x,&lb2.y);
	lb3.x = lb1.x + lb2.x;
	lb3.y = lb1.y + lb2.y;
	//因为可能出现-0.0的情况，所以在精度小于一定的时候，需要进行绝对值处理 
	if(fabs(lb3.x) < 0.05)  //此处取0.05的意思是小于0.05就会舍去，故0.05是零界点 
	{
		lb3.x = fabs(lb3.x);
	}
		if(fabs(lb3.y) < 0.05)
	{
		lb3.y = fabs(lb3.y);
	}
	printf("(%.1f, %.1f)",lb3.x,lb3.y);
	return 0;
}
