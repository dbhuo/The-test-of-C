#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct data{
	char names[11];
	int ages;
	char phonesNum[18];
};
int main()
{
	int n;
	scanf("%d",&n);
	struct data arr[n];
	int i,j;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%s %d %s",arr[i].names,&arr[i].ages,arr[i].phonesNum);
	}
	for(i = 0 ; i < n ; i++)
	{
		int k = i ; 
		 for( j = i + 1 ; j <n ; j++)
		 {
		 	if(arr[j].ages < arr[k].ages)
		 	{
		 		k = j;	
			}
		 }
		 if(k!=j)
		 {
		 	struct data temp = arr[i];
		 	arr[i] = arr[k];
		 	arr[k] = temp;
		 }
	}
	for(i = 0 ; i < n ;i++)
	printf("%s %d %s\n",arr[i].names,arr[i].ages,arr[i].phonesNum);
}
