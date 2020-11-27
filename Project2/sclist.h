#ifndef _SCLIST_H_
#define _SCLIST_H_

#include "Common.h"

typedef  struct SCListNode{

	ElemType data;
	struct SCListNode *next;


}SCListNode;

typedef SCListNode* SCList;

void SCListInit(SCList *phead);
void SCListPushBack(SCList *phead,ElemType x);
void SCListPushFront(SCList *phead,ElemType x);
void SCListShow(SCList phead);
void SCListPopBack(SCList *phead);
void SCListPopFront(SCList *phead);
void SCListSort(SCList *phead);
SCListNode* SCListFind(SCList *phead,ElemType x);
void SCListLength(SCList phead);
void SCListInsertByVal(SCList *phead,ElemType x);
void SCListEraseByVal(SCList *phead,ElemType x);



void SCListInit(SCList *phead)
{
	assert(phead != NULL);
	*phead = NULL;
}

void SCListShow(SCList phead)
{
	SCListNode *p = phead;
	if (p != NULL)
	{
        while (p ->next!= phead)
	{
		printf("%d->", p->data);
		p = p->next;
	}

	printf("%d->", p->data);
	printf("Over.");
	}
}


void SCListPushBack(SCList *phead,ElemType x)
{
	assert(phead != NULL);
	SCListNode *s = (SCListNode*)malloc(sizeof(SCListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;


	SCListNode *p = *phead;
	if (p == NULL)
	{
		*phead = s;
	}
	else
	{
		while (p->next != *phead)
		{
			p = p->next;
		}
		p->next = s;
	}
	s->next = *phead;


}


//void SCListPushFront(SCList *phead)
//{
//	assert(phead != NULL);
//
//
//}
//
//
//void SCListPopBack(SCList *phead)
//{
//
//	assert(phead != NULL);
//}
//
//
//void SCListPopFront(SCList *phead)
//{
//	assert(phead != NULL);
//
//}
//
//void SCListLength(SCList phead)
//{
//	
//
//}
//
//void SCListEraseByVal(SCList *phead,ElemType x)
//{
//
//
//	assert(phead != NULL);
//}
//
//void SCListInsertByVal(SCList *phead,ElemType x)
//{
//
//
//	assert(phead != NULL);
//}
//
//void SCListSort(SCList *phead)
//{
//	assert(phead != NULL);
//}
//SCListNode* SCListFind(SCList *phead,ElemType x)
//{
//
//	assert(phead != NULL);
//	
//}
// 


  


 

#endif /*_SCList_H_*/