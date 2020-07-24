#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s )
{
	int len = strlen(s) ; 
	int i ;
	bool leap = true;
	for(i = 0; i <= len/2;i++)
	{
		if(s[i] != s[len-1-i])
		{
			leap = false;
			break;
		}
	}
	return leap;
} 

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
