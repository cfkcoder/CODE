#ifndef _DCLIST_H_
#define _DCLIST_H_


#include "Common.h"
typedef struct DCListNode{
	ElemType data;
	struct DCListNode *next;
	struct DCListNode *prev;

}DCListNode;

typedef DCListNode*  DCList;


void DCListInit(DCList *phead);
void DCListshow(DCList phead);
void DCListPushBack(DCList *phead,ElemType x);
void DCListPushFront(DCList *phead,ElemType x);
void DCListPopBack(DCList *phead);
void DCListPopFront(DCList *phead);
void DCListClear(DCList *phead);
void DCListDestroy(DCList *phead);
void DCListEraseByVal(DCList phead,ElemType x);
void DCListSort(DCList phead);
void DCListInsertByVal(DCList phead, ElemType key);
void DCListReserve(DCList phead);
ElemType DCListFront(DCList phead);
ElemType DCListBack(DCList phead);
DCListNode* DCListFind(DCList phead,ElemType key);
size_t DCListLength(DCList phead);


DCListNode* _Buynode(ElemType v = ElemType())
{
	DCListNode *_S = (DCListNode*)malloc(sizeof(DCListNode));
	assert(_S != NULL);
	_S->data = v;
	_S->prev = _S->next = _S;
	return _S;

}
void DCListInit(DCList *phead)
{
*phead = _Buynode();

}

void DCListPushBack(DCList *phead,ElemType x)
{
	assert(phead != NULL);
	DCListNode *head = *phead;
	/*DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
	s->data = x;*/
	DCListNode *s = _Buynode(x);
	//assert(s != NULL);
	s->prev = head->prev;
	s->next = head;
	head->prev->next = s;//s->prev->next=s;
	head->prev = s;

}

void DCListPushFront(DCList *phead,ElemType x)
{
	assert(phead != NULL);
	DCListNode *head = *phead;
	DCListNode *p = *phead;
	/*DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
	s->data = x;*/

	DCListNode *s = _Buynode(x);

	s->prev = head;
	s->next = head->next;
	head->next->prev = s;
	head->next = s;

}
void DCListPopBack(DCList *phead)
{
	/*assert(phead != NULL);
	DCListNode *p = *phead;
	DCListNode *head = *phead;
	while (head != p->prev->prev)
	{
		head = head->next;
	}

	free(head->next);
	(*phead)->prev = head;
	head->next = (*phead);*/


	//�Ƽ�
	assert(phead != NULL);
	
	DCListNode *head = *phead;
	if (head->next != *phead)
	{
		DCListNode *p = head->prev;
		head->prev = p->prev;
		p->prev->next = head;
		free(p);
		return;
	}
	return;
	}

void DCListPopFront(DCList *phead)
{
	assert(phead != NULL);
	DCListNode *head = *phead;
	DCListNode *p = head->next;
	if (head->next == *phead)
	{
		return;
	}
	head->next = p->next;
	p->next->prev = head;
	free(p);
}


void DCListClear(DCList *phead)
{
	//assert(phead != NULL);//�ҵ�//����ͷɾ
	//DCListNode *head = *phead;
	//
	//while (head->next!=*phead)
	//{
	//	DCListNode *p = head->next;
	//	p->next->prev = head;
	//	p->prev->next = p->next;
	//	free(p);
		
	

	//assert(phead != NULL);//���ɾ��
	//DCListNode *head = *phead;
	//DCListNode *p = (*phead)->next;
	//if (p->next == *phead)
	//{
	//	return;
	//}
	//DCListNode *tmp = NULL;
	//while (p != *phead)
	//{
	//	tmp = p;
	//	p = p->next;
	//	free(tmp);

	//}
	//(*phead)->next = (*phead)->prev = *phead;


//
//	assert(phead != NULL);
//	while ((*phead)->next != (*phead)->prev)//����һ�������⣬���ս������
//	{
//		DCListPopBack(phead);
//	}
//
//}

	//assert(phead);
	//if ((*phead)->next == (*phead))
	//{
	//	return;
 //   }

	//DCListNode *p = (*phead)->next;
	//while (p != *phead)
	//{
	//	DCListNode *q = p->next;
	//	free(p);
	//	p = q;
	//}
	//(*phead)->next =(*phead)->prev= *phead;

	//return;



assert(phead);
DCListNode *p = (*phead)->prev;

while (p != *phead)           //βɾ��clear
{
	DCListNode *q = p;
	p->prev->next = *phead;
	(*phead)->prev = p->prev;
	//p->next->prev = p->prev;
	p = (*phead)->prev;
	free(q);

}

}


size_t DCListLength(DCList phead)
{

	assert(phead);//�ж��������
	DCListNode *head = phead;
	size_t size = 0;
	while (head->next != phead)
	{
		head = head->next;
		size++;
	}
	return size;
}
DCListNode* DCListFind(DCList phead,ElemType key)
{
	assert(phead != NULL);
	DCListNode *p = phead->next;
	while (p != phead&&p->data != key)
	{

	p = p->next;

	}
	if (p == phead)
	{
		return NULL;
	}

	return p;
}

void DCListEraseByVal(DCList phead, ElemType x)
{

	assert(phead);
	DCListNode *p=DCListFind(phead, x);
	if (p == NULL)
	{
		printf("ɾ��ʧ��.\n");
		return;
	}
	else
	{
		p->prev->next = p->next;
		p->next->prev = p->prev;
		free(p);
		printf("ɾ�����ݳɹ�.\n");
	}

}
void DCListInsertByVal(DCList phead, ElemType key)
{
assert(phead != NULL);
//DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
//assert(s != NULL);
//s->data = key;
//s->next = NULL;
DCListNode *s = _Buynode(key);
DCListSort(phead);
DCListNode *head = phead->next;

while (s->data>head->data &&head != phead)
	{
		head = head->next;
	}
	s->next = head;
	s->prev = head->prev;
	s->prev->next = s;
	s->next->prev = s;
	
}

void DCListSort(DCList phead)
{

	assert(phead);
	if (DCListLength(phead) <= 1)
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
		DCListNode *tmp = phead->next;
		while (tmp != phead&&p->data > tmp->data)
		{
			tmp = tmp->next;
        }
		p->next = tmp;                             //����ֱ�Ӱ�ֵ���� ��Ϊtmp != phead������tmp!=NULL���Կ���ֱ�Ӱ�ֵ����
		p->prev = tmp->prev;
		p->prev->next = p;
		p->next->prev = p;


	}
	

//
//	DCListNode *m = NULL; //�ҵ�
//	DCListNode *p = phead->next;
//	DCListNode *q = p->next;
//	DCListNode *head = phead->next;
//	p->next = NULL;
//	q->prev = NULL;
//
//	while (q != phead)
//	{
//		p = q;
//	    q=q->next;
//
//		while (head != NULL&&p->data > head->data)
//		{
//			m = head;
//			head = head->next;
//		}
//		if (m == NULL)
//		{
//			p->next = phead->next;
//			phead->next->prev = p;
//			p->prev = phead;
//			phead->next = p;
//			
//}
//		else
//		{
//			p->next = m->next;
//			p->prev = m;
//			if (m->next == NULL)
//			{
//				;
//			}
//			else
//			{
//				m->next->prev = p;
//
//			}
//
//			m->next = p;
//			}
//		m = NULL;
//		head =phead->next ;
//
//	}
//	DCListNode *b = phead->next;
//	DCListNode *a = NULL;
//	while (b != NULL)
//	{
//		a = b;
//		b = b->next;
//
//	}
//	phead->prev = a;
//	a->next = phead;


}

void DCListReserve(DCList phead)
{
	assert(phead);
	if (DCListLength(phead) == 1)
	{
		return;
	}
	DCListNode *p= phead->next;
	DCListNode *q = p->next;
	p->next = phead;
	phead->prev = p;

	while (q != phead)
	{
		p = q;
		q = q->next;

		p->next = phead->next;
		p->prev = phead;
		p->next->prev = p;
		p->prev->next = p;

	}

}

ElemType DCListFront(DCList phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	return phead->next->data;

}

ElemType DCListBack(DCList phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	return phead->prev->data;

}

void DCListshow(DCList phead)
{
	
	DCListNode *p = phead->next;
	while (p != phead)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("Over.");


}
void DCListDestroy(DCList *phead)
{
	assert(phead!=NULL);
	DCListClear(phead);
	free(*phead);
	*phead = NULL;//Ԥ��Ұָ��

}





#endif /*_DCLIST_*/