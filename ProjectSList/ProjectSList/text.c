#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


typedef int SLDataType;
typedef struct SListNode{

	SLDataType data;
     struct SListNode* next;

}SListNode;


void SListInit(SListNode **pphead)
{
	*pphead = NULL;
}

SListNode *_BuyNode(SLDataType x)
{
	SListNode *node = (SListNode*)malloc(sizeof(SListNode));
	node->data = x;
	node->next = NULL;

	return node;

}
void SListPushBack(SListNode **pphead, SLDataType x)
{

	SListNode* newnode = _BuyNode(x);
	if ((*pphead) == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}

}

void SListPushFront(SListNode **pphead, SLDataType x)
{
	SListNode *newnode = _BuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	newnode->next = *pphead;
	*pphead = newnode;
	
}

void SListPopBack(SListNode **pphead)
{
	SListNode *cur = *pphead;
	SListNode *prev = NULL;
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;

	}
	free(prev->next);
	prev->next = NULL;


}

void SListPopFront(SListNode **pphead)
{
	SListNode* head = *pphead;
	*pphead = head->next;
	free(head);
	head = NULL;

}
void SListInsertSort(SListNode **pphead)
{

	SListNode *prev = NULL;
	SListNode *tmp = *pphead;
	SListNode *p = *pphead;
	SListNode *q = p->next;
	p->next = NULL;


	while (q)
	{
		p = q;
		q = q->next;

		while (tmp&&p->data > tmp->data)
		{


			prev = tmp;
			tmp = tmp->next;



		}
		if (prev == NULL)
		{

			p->next =tmp;
			*pphead = p;

		}
		else
		{
			p->next = prev->next;
			prev->next = p;


		}
		tmp = *pphead;
		prev = NULL;


	}




	

}
void SListPrint(SListNode *phead)
{
	SListNode *cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");

}


SListNode* SListFind(SListNode **pphead,SLDataType x)
{
	SListNode *head = *pphead;
	while (head)
	{
		if (head->data == x)
		{
			return head;
		}
		head = head->next;
	}
	return NULL;
}


void SListInterAfter(SListNode *pos, SLDataType x)
{

	SListNode *newnode = _BuyNode(x);
	SListNode* prev = pos->next;
	pos->next = newnode;
	newnode->next = prev;



}

void SListEraseAfter(SListNode *pos)
{
	SListNode *Next = pos->next;
	SListNode* NNext = pos->next->next;
	pos->next = NNext;
	free(Next);

}


void SListRemDuplicate(SListNode **pphead)
{

	SListNode *prev = NULL;
	SListNode *p = *pphead;
	SListNode *q = p->next;
	p->next = NULL;
	SListNode *tmp = *pphead;


	while (q)
	{
		p = q;
		q = q->next;

		while (tmp&&p->data != tmp->data)
		{

			prev = tmp;
			tmp = tmp->next;


		}
		if (tmp == NULL)
		{
			
			prev->next = p;
			p->next = NULL;
		
		}
		
			tmp = *pphead;
		    prev = NULL;
			
		
	}

}



void DeleteDuplicate(SListNode **pphead)
{
	

	SListNode *prev = NULL;
	SListNode *cur = *pphead;
	SListNode *next = cur->next;


	while (next)
	{
		if (cur->data != next->data)
		{
			prev = cur;
			cur = next;
			next = next->next;

		}
		else{
			while (next&&cur->data == next->data)
			{
				next = next->next;
			}

			/*if (prev == NULL)
			{

				*pphead = next;
				cur = *pphead;
				if (next)
				next = next->next;


			}*/
			
			
				//prev->next = next;
				while (cur != next)
				{
					SListNode *cur2 = cur;
					cur = cur->next;
					free(cur2);
					cur2 = NULL;
				}
				if (prev == NULL)
				{
					*pphead = next;
					
					/*if (next == NULL)
					{
						*pphead = NULL;
					}*/
					/*if (next)
						next = next->next;*/
				}
				if (prev)
				{
					prev->next = next;
				
					
				}
				
		    }
		if (next)
			next = next->next;

	}


}
void SListDestroy(SListNode **pphead)
{

	SListNode* cur = *pphead;
	if (*pphead == NULL)
	{
		return;
	}
	while (cur)
	{
		SListNode *prev = cur;
		cur = cur->next;
		free(prev);
		prev = NULL;

	}


}

int main()
{


	SListNode *head;
	SListInit(&head);
	

	SListPushBack(&head, 1);
	//SListPushBack(&head, 2);
	//SListPushBack(&head, 3);
	//SListPushBack(&head, 3);

	//SListPushFront(&head, 2);
	//SListPushFront(&head, 1);
	//SListPushFront(&head, 3);
	//SListPushFront(&head, 0);

	SListPushBack(&head, 4);
	SListPushBack(&head, 4);
	SListPushBack(&head, 4);
	SListPushBack(&head, 4);
	SListPushBack(&head, 4);
	SListPushBack(&head, 4);
	//SListPushFront(&head, 2);
	//SListPushFront(&head, 1);
	//SListPushBack(&head, 5);
	

	//SListPopBack(&head);
	//SListPopFront(&head);

	SListPrint(head);
	/*SListNode* p=SListFind(&head, 4);
	SListInterAfter(p, 55);
	SListPrint(head);
	SListNode* p1 = SListFind(&head, 4);
	SListEraseAfter(p1);*/
	//SListPrint(head);

	/*SListInsertSort(&head);
	SListPrint(head);*/


	/*SListRemDuplicate(&head);
	SListPrint(head);*/


	DeleteDuplicate(&head);
	SListPrint(head);
	SListDestroy(&head);




	return 0;
}