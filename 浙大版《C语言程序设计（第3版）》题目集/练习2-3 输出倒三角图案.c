#include <stdio.h>
int main()
{
    int i,j,k;
    for(i = 1; i<5;i++)
    {
        for(j = 0;j < i-1 ;j++)
        {
        	printf(" ");
		}
		for(k = 0;k<4-i;k++)
		{
			printf("* ");
		}
		printf("*");
        printf("\n");
    }
    return 0;
}
