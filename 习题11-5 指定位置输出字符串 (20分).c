#include <stdio.h>
#define MAXS 10

char *match( char *s, char ch1, char ch2 )
{
	char *arr;
	arr = (char*)malloc(sizeof(char)*MAXS); //开辟新单元 
	int len = strlen(s); //确定其长度
	int locate1 = -1 ; //确定第一个出现字符ch1的位置 
	int locate2 = len-1; //确定第二个出现字符ch2的位置 
	int i=0,j=0;
	for(i = 0 ; i <len ;i++)
	{
		if(s[i] == ch1)
		{
			locate1 = i;
			break;  //保证取到的是第一个字符ch1的位置 
		}
	}
		for(i = 0 ; i <len ;i++)
	{
		if(s[i] == ch2)
		{
			locate2 = i;
			break;  //取第二个字符ch2的位置 
		}
	}
	if(locate1 !=-1 && locate1<=locate2){
		for(i = locate1;i<=locate2;i++)
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	if(locate1!=-1)
	{
		for(i = locate1,j=0; i < len;i++,j++ )
		{
			arr[j] = s[i]; 
		}
	}
	arr[j] = '\0'; //两层意思，如果第一个字符没找到的话，直接输出'\0'，否则上面循环结束后最后一个位置为'\0'
	return arr;
}

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
} 
