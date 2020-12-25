#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define ElemType int




typedef struct LinkStackNode{

	ElemType data;
	struct LinkStackNode* link;


}LinkStackNode;


typedef LinkStackNode* LinkStack;





void LinkStackInit(LinkStack *pst);
void LinkStackPush(LinkStack *pst, ElemType x);
void LinkStackPop(LinkStack *pst);
int LinkStackSize(LinkStack *pst);
ElemType LinkStackTop(LinkStack *pst);
void LinkStackShow(LinkStack *pst);
void LinkStackDestroy(LinkStack *pst);




void LinkStackInit(LinkStack *pst)
{
	assert(pst != NULL);
	*pst = NULL;

}

void LinkStackPush(LinkStack *pst, ElemType x)
{
	assert(pst != NULL);
	LinkStackNode *s = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(s != NULL);
	s->data = x;
	s->link = *pst;
	*pst = s;

}
void LinkStackPop(LinkStack *pst)
{
	assert(pst != NULL);
	if (*pst != NULL)
	{
		LinkStackNode *p = *pst;
		*pst = p->link;
		free(p);
	}
	

}
ElemType LinkStackTop(LinkStack *pst)
{
	assert(pst != NULL&&(*pst) != NULL);
	{
		return (*pst)->data;

	}
	

}

int LinkStackSize(LinkStack *pst)
{
	assert(pst != NULL);
	int size = 0;
	LinkStackNode* p = *pst;
	while (p != NULL)
	{
		size++;
		p = p->link;
		

	}
	return size;
}
void LinkStackShow(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = *pst;
	while (p != NULL)
	{
		printf("| %d |\n", p->data);
		p = p->link;

	}
	printf("-----\n");


}
void LinkStackDestroy(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = *pst;
	while (p != NULL)
	{
		*pst = p->link;
		
		free(p);
		p = *pst;


	}

}

int main()
{
	LinkStack st;
	LinkStackInit(&st);
	LinkStackPush(&st,1);
	LinkStackPush(&st, 2);
	LinkStackPush(&st, 3);
	LinkStackPush(&st, 4);
	LinkStackPush(&st, 5);
	LinkStackShow(&st);
	LinkStackDestroy(&st);





	return 0;

}