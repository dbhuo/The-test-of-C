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
	//��Ϊ���ܳ���-0.0������������ھ���С��һ����ʱ����Ҫ���о���ֵ���� 
	if(fabs(lb3.x) < 0.05)  //�˴�ȡ0.05����˼��С��0.05�ͻ���ȥ����0.05������ 
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
