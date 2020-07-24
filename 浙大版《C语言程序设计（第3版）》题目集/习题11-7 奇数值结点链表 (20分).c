#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist()
{
	struct ListNode *p,*q,*head;
	int item;
	p = q = (struct ListNode *)malloc(sizeof(struct ListNode));
	scanf("%d",&item);
	int n = 0;
	while(item!=-1)
	{
		n++;
		if(n==1)
		{
			p->data = item;
			head = p ;
		}else
		{
			q->data = item;
			p->next = q;
			p = q;
		}
		q = (struct ListNode *)malloc(sizeof(struct ListNode));
		scanf("%d",&item);
	}
	p->next = NULL;
	return head;
} 
struct ListNode *getodd( struct ListNode **L )
{
	int arr[20];
	int count = 0 ;
	struct ListNode *pre,*q;
	struct ListNode *head = *L;
	while(head!=NULL && (head->data)%2==1)   //保证第一个数为偶数 
	{
		arr[count++] = head->data;
		head = head->next;
	}
	pre = head;
	q = head->next;
	while(q)
	{
		if(q->data%2==1)
		{
			arr[count++] = q->data;
			pre->next = q->next;
			free(q);
			q = pre->next;
		}else{
			pre = q;
			q = q->next; 
		}
	}
	*L = head;
	int i = 0;
	int n = 0;
	struct ListNode *newList;
	pre = q = (struct ListNode *)malloc(sizeof(struct ListNode));
	while(i < count)
	{
		n++;
		if(n==1)
		{
			pre->data = arr[i++];
			newList = pre;
		}else
		{
			q->data = arr[i++];
			pre->next = q;
			pre = q;
		}
		q = (struct ListNode *)malloc(sizeof(struct ListNode));
	}
	pre->next = NULL;
	return newList;
}
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}
