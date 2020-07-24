#include <stdio.h>
#define MAXS 15

void StringCount( char *s )
{
	int len = strlen(s);
	int i;
	int upper = 0;
	int lower = 0 ;
	int digits = 0 ;
	int blank = 0 ; 
	int others = 0 ;
	for(i = 0 ; i < len ; i++)	
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			digits++;
		}else if(s[i]>='a'&&s[i]<='z')
		{
			lower++;
		}else if(s[i]>='A'&&s[i]<='Z')
		{
			upper++;
		}else if(s[i]==' ')
		{
			blank++;
		}else{
			others++;
		}
	}
	printf("%d %d %d %d %d",upper,lower,blank,digits,others);
} 
void ReadString( char *s )
{
	gets(s);
} 

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
