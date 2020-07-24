#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist()
{
	struct ListNode *head = NULL;
	struct ListNode *p1,*p2;
	p1 = p2=(struct ListNode *)malloc(sizeof(struct ListNode ));
	int n = 0;
	scanf("%d",&p1->data);
	while(p1->data!=-1)
	{
		n++;
		if(n==1) head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct ListNode *)malloc(sizeof(struct ListNode *));
		scanf("%d",&p1->data);
	}
	p2->next = NULL;
	return head;
}
struct ListNode *deletem( struct ListNode *L, int m )
{
	struct ListNode *head = NULL;
	struct ListNode *p = NULL;
	struct ListNode *q = NULL;
	while(L!=NULL)
	{
		if(L->data!=m)
		{
			head = L;
			p = L->next;
			q = L;
			break;
		}
		L = L->next;
	}
	while(p)
	{
		if(p->data==m)
		{
			head->next = p->next;
			free(p);
			p = head->next;
		}else{
		head = head->next;
		p = p->next;
		}
	}
	return q;
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}
