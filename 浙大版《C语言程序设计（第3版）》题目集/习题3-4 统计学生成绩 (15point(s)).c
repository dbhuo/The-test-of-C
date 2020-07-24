#include <stdio.h>
int main()
{
	int n,i,a=0,b=0,c=0,d=0,e=0;
	float score;
	if(scanf("%d",&n))
	{
		for(i = 1;i<=n;i++)
		{
			if(scanf("%f",&score))
			{
				if(score>=90)
				{
					a++;
				}else if(score>=80){
					b++;
				}else if(score>=70){
					c++;
				}else if(score>=60){
					d++;
				}else{
					e++;
				}
			}
		}
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;	
} 
