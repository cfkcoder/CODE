#include <stdio.h>
#pragma warning(disable:4996)



DCListNode* _Buynode(Elemtype v = Elemtype())
{
	DCListNode *_S = (DCListNode*)malloc(sizeof(DCListNode));
	assert(_S != NULL);
	_S->data = v;
	_S->next = _S->prev = _S;
	return _S;
}
void DClistClear(DClist *phead)
{
	assert(phead != NULL);
	DClistNode *head = *phead;
	if (head->next == head)
	{
		return;
	}
	DClistNode *p = (*phead)->next;

	while (p!= head)
	{
		/*DClistNode *p = (*phead)->next;
		p->next->prev = head;
		p->prev->next = p->next;
		free(p);*/

		DClistNode *p = (*phead)->prev;
		p->prev->next = head;
		head->prev = p->prev;
		free(p);
		p = p->next;

	}


}


DClistNode* DClistNodeFind(DClist phead, Elemtype key)
{

	assert(phead != NULL);
	DCListNode *p = phead->next;
	while (p != phead&&p->data != key)
		p = p->next;
	if (p == phead)
	
		return NULL;
	
	return p;
	/*DClistNode *head = phead->next;
	while (head != phead)
	{
		if (head->data == key)
		{
			return head;
		}
		head = head->next;
	}
	return NULL;*/



}


void DClistNodeEraseByVal(DClist phead, Elemtype key)
{

	assert(phead != NULL);
	//DClistNode *p = phead->next;
	if (phead->next != phead)
	{
		DClistNode *p = DClistNodeFind(phead, key);
		if (p == NULL)
		{
			printf("ÎÞ¸ÃÔªËØ£¡\n");
			return;
		}
		p->prev->next = p->next;
		p->next->prev = p->prev;
		free(p);

	}
	


	void DClistSort(DCList phead)
	{
		assert(phead != NULL);
		DCListNode *p = phead->next;
		DCListNode *q = p->next;
		p->next = phead;
		phead->prev = p;

		while (q != phead)
		{
			p = q;
			q = q->next;
			DCListNode *tmp = phead->next;
			while (p != phead&&p->data >tmp->data)
			{
				  tmp = tmp->next;
			}
			p->next = tmp;
			p->prev = tmp->prev;
			p->next -> prev = p;
			p->prev->next = p;

		}

	}

	void DCListInsertByVal(DClist phead, Elemtype x)
	{
		assert(phead != NULL);
		if (DCListLength(phead) == 1)
		{
			return;
		}
		DCListNode *p = phead->next;
		while (p != phead&&x>p->data)
		{
			p = p->next;
		}
		DClistNode *s = _Buynode(x);
		s->next = p;
		s->prev = p->prev;
		s->next->prev = s;
		s->prev->next = s;

	}
	void DCListReserve(DCList phead)
	{
		assert(phead != NULL);
		if (DCListLength == 1)
		{
			return;
		}
		DCListNode *p = phead->next;
		DCListNode *q = p->next;
		p->next = phead;
		phead->prev = p;

		while (q != phead)
		{
			p = q;
			q = q->next;


			p->next = phead->next;
			p->prev = phead;
			p->prev->next = p;
			p->next->prev = p;

		}

	}


	void DCListEraseALL(DCList phead,Elemtype x)




}
int main()
{











	return 0;
}