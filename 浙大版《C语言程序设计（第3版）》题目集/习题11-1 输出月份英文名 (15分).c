#include <stdio.h>

char *getmonth( int n )
{
	char *list[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	if(n<=0||n>12)
	{
		return "wrong input!";
	}else{
		return list[n-1];
	}
}

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}
