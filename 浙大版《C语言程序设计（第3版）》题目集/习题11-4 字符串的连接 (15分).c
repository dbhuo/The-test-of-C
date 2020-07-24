#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t )
{
	int len1 = strlen(s); //统计s的长度
	int len2 = strlen(t); //统计t的长度
	int i,j;
	for(i = len1,j=0;i<len1+len2,j<len2;i++,j++)
	{
		s[i] = t[j];
	}
	s[len1+len2] = '\0';
	return s;
 } 

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}
