#include <stdio.h>
#pragma warning(disable:4996)

#define Elemtype int

typedef struct LinkStackNode{
	int data;
	struct linkStackNode *link;

}LinkStackNode;

typedef LinkStackNode* LinkStack;
void LinkStackInit(LinkStack *pst)
{
	assert(pst != NULL);
	*pst = NULL;

}

void LinkStackPushFront(LinkStack *pst,Elemtype x)
{
	assert(pst != NULL);
	LinkStackNode *node = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(node != NULL);
	node->data =x ;
	node->link = *pst;
	*pst = node;

}

void LinkStackPopBack(LinkStack *pst)
{

	assert(pst != NULL);
	if (*pst != NULL)
	{
		LinkStackNode *p = *pst;
		*pst = p->link;
		free(p);
	}

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

Elemtype LinkStackTop(LinkStack *pst)
{
	assert(pst != NULL&&*pst!=NULL);
	return (*pst)->data;

}

int LinkStackSize(LinkStack *pst)
{
	assert(pst != NULL);
	int size = 0;
	LinkStackNode *p = *pst;
	while (p!= NULL)
	{
		p = p->link;
		size++;
	}
	return size;

}






}
int main()
{
	
	LinkStack pst;



	return 0;
}