#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)


typedef struct ListNode
{
	    struct ListNode* next;
	    int data;

}ListNode;

typedef ListNode* List;

void ListCreate_Tail(List *phead)
{
	assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	assert(*phead != NULL);
	(*phead)->data = 1;
	(*phead)->next = NULL;
	ListNode *p = *phead;
	for (int i = 2; i <= 10; i++)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s != NULL);
		s->data = i;
		s->next = NULL;
		p->next = s;
		p = s;


	}




	


}


int main()
{
	List mylist;
	ListInit(&mylist);
	ListCreate(&mylist);
	ListShow(&mylist);




	return 0;
}