#include <stdio.h>
#include <math.h>
/*
提示：double输入用lf形式，海伦公式为sqrt(p*(p-l1)*(p-l2)*(p-l3))
	  其中p为半周长;
*/
int main()
{
	double x1,y1,x2,y2,x3,y3;
	if(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3))
	{
		double l1,l2,l3;
		l1 = sqrt(pow((y1-y2),2)+pow((x1-x2),2));
		l2 = sqrt(pow((y3-y2),2)+pow((x3-x2),2));
		l3 = sqrt(pow((y1-y3),2)+pow((x1-x3),2));
		if((l1+l2)>l3&&(l1+l3)>l2&&(l2+l3)>l1)
		{
			double perimeter = l1+l2+l3;
			double p = (l1+l2+l3)/2;
			double area = sqrt(p*(p-l1)*(p-l2)*(p-l3));
			printf("L = %.2f, A = %.2f",perimeter,area);
		}else{
			printf("Impossible");
		}
	}
	return 0;
}
