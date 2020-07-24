#include <stdio.h>
/*
从66% - 67%给我造成了一些障碍。必须在数值计算过程使用double才会四舍五入 
*/
int main()
{
	int n,m;
	if(scanf("%d %d",&n,&m))
	{
		double t =(double)(n-m)*100/m;
		if(t<10.0)
		{
			printf("OK");
		}else if(t<20){
			printf("Exceed %.0f%%. Ticket 200",t);
		}else{
			printf("Exceed %.0f%%. License Revoked",t);
		}
	}
	return 0;
}
