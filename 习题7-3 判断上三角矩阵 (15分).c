#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++)
	{
		int m,j,k,leap = 0;
		scanf("%d",&m);
		int arr[m][m];
		for(j = 0 ; j < m;j++)
		{
			for(k = 0 ;k < m ;k++)
			{
				scanf("%d",&arr[j][k]);
				if(k<j)
				{
					if(arr[j][k]!=0)
					{
						leap = 1;
					}
				}
			}
		}
		if(leap)
		{
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}
