#include <stdio.h>

struct complex{
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y)
{
	struct complex sum;
	int sign;
	if((x.imag * y.imag) < 0)
	{
		sign = 1;
	}else{
		sign = -1;
	}
	sum.real = x.real*y.real + (sign*(y.imag*x.imag));
	sum.imag = x.real*y.imag + y.real*x.imag;
	return sum;
}

int main()
{
    struct complex product, x, y;

    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
    product = multiply(x, y);
    printf("(%d+%di) * (%d+%di) = %d + %di\n", 
            x.real, x.imag, y.real, y.imag, product.real, product.imag);

    return 0;
}
