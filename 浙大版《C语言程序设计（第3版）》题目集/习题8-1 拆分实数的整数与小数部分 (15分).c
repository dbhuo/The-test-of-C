#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart )
{
	int i;
	for(i = 0;i<10000;i++)
	{
		if((x-i)<1)
		{
			break;
		}
	}
	*intpart = (int)i;
	*fracpart = x-i;	
}

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}
