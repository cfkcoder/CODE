#ifndef _STACK_H_
#define _STACK_H_

#define STACK_DEFAULT_SIZE  8
#include "Common.h"
//////////////////////顺序栈+进行扩容的考虑
typedef struct SeqStack{

	ElemType *base;   //栈空间
	size_t capacity;
	int top;         //栈顶指针

}SeqStack;


void SeqStackInit(SeqStack *pst,int sz=STACK_DEFAULT_SIZE);
void SeqStackPush(SeqStack *pst, ElemType x);
void SeqStackPop(SeqStack *pst);
void SeqStackShow(SeqStack *pst, ElemType x);
void SeqStackDestroy(SeqStack *pst);

ElemType SeqStackTop(SeqStack *pst);
void SeqStackTop(SeqStack *pst, ElemType *top_val);
int SeqStackSize(SeqStack *pst);




void SeqStackInit(SeqStack *pst,int sz)
{

	pst->capacity = sz > STACK_DEFAULT_SIZE ? sz : STACK_DEFAULT_SIZE;
	pst->base = (ElemType*)malloc(sizeof(ElemType)*pst->capacity);
	pst->top = 0;

}

bool SeqStackIsFull(SeqStack *pst)
{
	assert(pst != NULL);
	return pst->top >= pst->capacity;
}

bool SeqStackIsEmpty(SeqStack *pst)
{

	assert(pst != NULL);
	return pst->top == 0;
}
void SeqStackPush(SeqStack *pst, ElemType x)
{
	
	assert(pst != NULL);
	if (SeqStackIsFull(pst))
	{
		printf("栈已满，%d不能入栈", x);
		return;
	}
	pst->base[pst->top] = x;
	pst->top++;

}
ElemType SeqStackTop(SeqStack *pst)
{
	assert(pst != NULL);
	assert(!SeqStackIsEmpty(pst));
	return pst->base[pst->top - 1];

}


void SeqStackTop(SeqStack *pst, ElemType *top_val)
{

	assert(pst);
	if (SeqStackIsEmpty(pst))
	{
		printf("栈已空，不能取栈顶元素");
	}
	*top_val = pst->base[pst->top - 1];

}

void SeqStackShow(SeqStack *pst)
{

	assert(pst != NULL);
	for (int i = pst->top - 1; i >= 0; --i)
	{
		printf("| %d |\n", pst->base[i]);
	}
	printf(" -- \n");
}

void SeqStackPop(SeqStack *pst)
{
	assert(pst != NULL);
	if (SeqStackIsEmpty(pst))
	{

		printf("栈已空，不能出栈.\n");
		return;
	}
	pst->top--;

	
}
int SeqStackSize(SeqStack *pst)
{
	assert(pst != NULL);
	return pst->top;
}

void SeqStackDestroy(SeqStack *pst)
{
	assert(pst != NULL);
	free(pst->base);
	pst->base = NULL;
	pst->capacity = 0;
	pst->top = 0;

}



//链栈
typedef struct LinkStackNode{
	ElemType data;
	struct LinkStackNode *link;

}LinkStackNode;


typedef LinkStackNode* LinkStack;

void LinkStackInit(LinkStack *pst);
void LinkStackShow(LinkStack *pst);
void LinkStackPop(LinkStack *pst);
int LinkStackSize(LinkStack pst);
void LinkStackDestroy(LinkStack *pst);
ElemType LinkStackTop(LinkStack pst);


void LinkStackInit(LinkStack *pst)
{
	assert(pst != NULL);
	*pst = NULL;

}

void LinkStackPushFront(LinkStack *pst, ElemType x)
{

	assert(pst != NULL);
	LinkStackNode *node = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(node != NULL);
	node->data = x;

	node->link = *pst;
	*pst = node;

}
void LinkStackPop(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = *pst;
	
	if (p != NULL)
	{
		
		*pst = p->link;
		free(p);
		p = *pst;
	}
	return;

}

ElemType LinkStackTop(LinkStack pst)
{
	assert(pst != NULL);
	return pst->data;
}
void LinkStackShow(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = *pst;
	while (p!=NULL)
	{
		printf("| %d | \n", p->data);
		p = p->link;
}
	   printf("---\n");

}

int LinkStackSize(LinkStack pst)
{
	assert(pst != NULL);
	size_t size = 0;
	LinkStackNode *p = pst;
	while (p != NULL)
	{
		p = p->link;
		size++;
	}
	return size;


}
void LinkStackDestroy(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = *pst;
	LinkStackNode *tmp = NULL;
	while (p != NULL)
	{
		*pst = p->link;
		free(p);
		p = *pst;
	}
}

#endif