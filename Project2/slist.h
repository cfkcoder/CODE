#ifndef _SLIST_H_
#define _SLIST_H_

#include "Common.h"
typedef struct SListNode
{
	ElemType data;
	struct SListNode *next;

}SListNode;

typedef SListNode*  SList;


void SListInit(SList *phead);
void SListPushBack(SList *phead);
void SListPushFront(SList *phead);
void SListShow(SList *phead);
ElemType SListPopBack(SList phead);
ElemType SListPopFront(SList phead);
void SListEraseByVal(SList *phead, ElemType key);
void SListSort(SList *phead);
void SListInsertByVal(SList *phead,ElemType key);
ElemType SListFront(SList phead);
ElemType SListBack(SList phead);
void SListEraseAll(SList *phead,ElemType key);
void SlistClear(SList *phead);
void SListDestroy(SList *phead);
void SListReserve(SList *phead);
size_t SListLength(SList phead);
SListNode* SListFind(SList *phead,ElemType key);

void SListInit(SList *phead)
{
	assert(phead!= NULL);
	*phead = NULL;
}

 


void SListPushFront(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;


	s->next = *phead;
	*phead = s;
}
void SListPushBack(SList *phead,ElemType x)
{

	assert(phead != NULL);
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	SListNode *p = *phead;
	if (p == NULL)
	{
		*phead = s;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = s;
	}


}
	void SListShow(SList phead)
	{
		//assert(phead != NULL);
		//assert(*phead != NULL);
		SListNode *p = phead;
		while (p != NULL)
		{
			printf("%d->", p->data);
			p = p->next;
		}
		printf("Over.\n");


	}

	void SListPopBack(SList *phead)
	{

		assert(phead != NULL);
		SListNode *p = *phead;
		SListNode *prev = NULL;
		if (p != NULL)
		{
			while (p->next != NULL)
			{
				prev = p;
				p = p->next;
			}
	}
		if (prev == NULL)
		{
*phead = NULL;

		}
		else
		{
		  prev->next = NULL;
		  free(p);
}
			}

	void SListPopFront(SList *phead)
	{
		assert(phead != NULL);
		SListNode *p = *phead;
	        if (p!=NULL)
		{
			*phead = p->next;
			free(p);
		}
	}

	SListNode* SListFind(SList phead, ElemType key)
	{
#if 0
		SListNode *p = phead;
		while (p != NULL)
		{
			if (p->data == key)
			{
				return p;
				p = p->next;
			}
			
		}
		return NULL;
#endif
		SListNode *p = phead;
		while (p != NULL&& p->data != key)
		{
			p = p->next;
		}
		return p;
	}

	void SListEraseByVal(SList *phead, ElemType key)
	{

#if 0
		assert(phead != NULL);
		SListNode *p = SListFind(*phead, key);
		if (p == NULL)
		{
			return;
		}
		if (p->next == NULL)
		{
			SListPopBack(phead);
		}
		else
		{
			SListNode *q = p->next;
			p->data = q->data;
			p->next = q->next;
			free(q);
		}
#endif
		assert(phead != NULL);
		SListNode *p = SListFind(*phead, key);
		if (p == NULL)
		{
			return;
		}

		SListNode *prev = *phead;
		while (prev != p&&prev->next != p)
		{
			prev = prev->next;
		}
		if ( prev==p)
		{
			*phead= p->next;
		}
		else
		{
			prev->next = p->next;
			free(p);
		}

	}

	void SListSort(SList *phead)
	{
		assert(phead!=NULL);
		if (SListLength(*phead) <= 1)
		{
			return;
		}

		SListNode *tmp = *phead;
		SListNode *prev = NULL;
		SListNode *p = *phead;
		SListNode *q = p->next;
		p->next = NULL;


		//Ñ°ÕÒ²åÈëÎ»ÖÃ
		while (q!=NULL)
		{
			p = q;
			q = q->next;

         while (tmp != NULL && p->data>tmp->data)
			{

	           prev = tmp;
	           tmp = tmp->next;

			}
		 if (prev == NULL)
		 {
			 p->next = *phead;
			 *phead = p;
		 }

		 else
		 {
			 p->next = prev->next;
			 prev->next = p;

		 }

		 tmp = *phead;
		 prev = NULL;

		}
		


	}

	void SListInsertByVal(SList *phead,ElemType key)
	{
		assert(phead!=NULL);
		SListNode *p = *phead, *prev = NULL;
		while (p != NULL&&key > p->data)
		{
			prev = p;
			p = p->next;
		}
		SListNode *s = (SListNode*)malloc(sizeof(SListNode));
		assert(s != NULL);
		s->data = key;

		if (prev == NULL)
		{
			s->next = *phead;
			*phead = s;
		}
		else
		{
			s->next = prev->next;
			prev->next = s;
		}
}
	void SListReserve(SList *phead)
	{
		assert(phead != NULL);
		if (SListLength(*phead) <= 1)
		{
			return;
		}

		SListNode *prve = NULL;
		SListNode *p = *phead;
		SListNode *q = p->next;
		p->next = NULL;

		while (q != NULL)
		{
			p = q;
			q = q->next;

			p->next = *phead;
			*phead = p;

	}

		


	}

ElemType SListFront(SList phead)
	{

		assert(phead != NULL);
		return phead->data;

	}
ElemType SListBack(SList phead)
	{
		assert(phead != NULL);
		
		SListNode *p = phead;
		SListNode *prev = NULL;

		while (p != NULL)
		{
			prev = p;
			p = p->next;
		}
		return prev->data;

		
	}

	//void SListEraseAll(SList *phead,ElemType key)
	//{
	//	assert(phead != NULL);
	//	

	//}
	void SListClear(SList *phead)
	{
		assert(phead != NULL);
		SListNode *p = NULL;
		
		while (*phead!=NULL)
	{
			
			p = *phead;
			*phead = p->next;
			free(p);
			
		}
}
	void SListDestroy(SList *phead)
	{
		SListClear(phead);
	}

size_t SListLength(SList phead)
	{
	//assert(phead != NULL);
	SListNode *p = phead;
	size_t size = 0;
	while (p)
	{
		size++;
		p = p->next;

	}
	return size;
	}

	/*while (p != NULL)
	{

	}
	p->next = s;
	p = s;*/














#endif /*_SLIST_H_*/