#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len( char *s[], int n )
{
	int max = -1;  //�������ݳ���� 
	int i;
	for(i = 0 ; i < n;i++)
	{
		int count = 0;  //ͳ�Ƶ�ǰ�ַ����鳤�� 
		while(*(s[i]+count)!='\0')
		{
			count++;
		}
		if(count > max)
		{
			max = count;
		}
	}
	return max;	
}

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}
