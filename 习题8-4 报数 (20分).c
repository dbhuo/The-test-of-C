#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] )
{
	int i;
	int sumAll = n; // 统计总人数为多少，用于等下遍历 
	int count = 1; //记录当前已经存入几人 
	int k = 1;  //统计当前位置数到第几 
	for(i = 0 ; i < n ; i++)
	{
		out[i] = 0;
	}
	while(n)
	{
		for(i = 1 ; i <= sumAll ;i++)
		{
			if(out[i-1]!=0)    //不断重复遍历，如果当前位置已经被淘汰出局，则跳到下一个 
			{
				continue;
			}else{
				if(k==m)	//当统计到当前位置为m的时候 
				{
					out[i-1] = count++; //将第几个排除的人存入到对应号数 
					k=1;               //重新开始读数 
					n--;              //每次有人淘汰，总人数就减1 
				}else{
					k++;			//如果当前统计位置还不到m的时候，则继续统计 
				}
			}
		}
	}
}

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}
