#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] )
{
	int i;
	int sumAll = n; // ͳ��������Ϊ���٣����ڵ��±��� 
	int count = 1; //��¼��ǰ�Ѿ����뼸�� 
	int k = 1;  //ͳ�Ƶ�ǰλ�������ڼ� 
	for(i = 0 ; i < n ; i++)
	{
		out[i] = 0;
	}
	while(n)
	{
		for(i = 1 ; i <= sumAll ;i++)
		{
			if(out[i-1]!=0)    //�����ظ������������ǰλ���Ѿ�����̭���֣���������һ�� 
			{
				continue;
			}else{
				if(k==m)	//��ͳ�Ƶ���ǰλ��Ϊm��ʱ�� 
				{
					out[i-1] = count++; //���ڼ����ų����˴��뵽��Ӧ���� 
					k=1;               //���¿�ʼ���� 
					n--;              //ÿ��������̭���������ͼ�1 
				}else{
					k++;			//�����ǰͳ��λ�û�����m��ʱ�������ͳ�� 
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
