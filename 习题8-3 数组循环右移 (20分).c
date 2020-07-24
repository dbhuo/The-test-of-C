#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m )
{
	int arr[n];
	int i ;
	for(i = 0 ;i<n;i++)
	{
		arr[(i+m)%n] = a[i];
	}
	for(i = 0 ; i < n;i++)
	{
		a[i] = arr[i];
	}
}

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
