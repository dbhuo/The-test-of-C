#include <stdio.h>
/*
��66% - 67%���������һЩ�ϰ�����������ֵ�������ʹ��double�Ż��������� 
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
