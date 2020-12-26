#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <assert.h>
#pragma warning(disable:4996)

#define ElemType int


typedef struct LinkQueueNode
{

	ElemType data;
	struct LinkQueueNode *link;


}LinkQueueNode;

typedef struct LinkQueue{

	struct LinkQueueNode *head;
	struct LinkQueueNode *tail;


}LinkQueue;



void LinkQueueInit(LinkQueue *pq);
void LinkQueueEn(LinkQueue *pq,ElemType x);
void LinkQueueDe(LinkQueue *pq);
ElemType LinkQueueFront(LinkQueue *pq);
bool LinkQueueEmpty(LinkQueue *pq);
int LinkQueueSize(LinkQueue *pq);
void LinkQueueDestroy(LinkQueue *pq);
void LinkQueueShow(LinkQueue *pq);
//////////////////////////////////////////////////////////////////////////////////////

void LinkQueueInit(LinkQueue *pq)
{
	assert(pq != NULL);
	pq->head =pq->tail= NULL;

}

void LinkQueueEn(LinkQueue *pq,ElemType x)
{
	assert(pq != NULL);
	LinkQueueNode *node = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(node != NULL);
	node->data = x;
	node->link = NULL;
	if (pq->head ==NULL)
	{
		pq->head = pq->tail = node;
	}
	else
	{
		pq->tail->link = node;
		pq->tail = node;
	}
	
}
void LinkQueueDe(LinkQueue *pq)
{
	assert(pq != NULL);
	if (pq->head!=NULL)
	{
		if (pq->head == pq->tail)
		{
			pq->head = pq->tail = NULL;
		}
		else
		{
			LinkQueueNode *p = pq->head;
			pq->head = p->link;
			free(p);


		}
		
	}
	
}

ElemType LinkQueueFront(LinkQueue *pq)
{

	assert(pq != NULL);
	if (pq->head != NULL)
	{
		return pq->head->data;
	}

}

int LinkQueueSize(LinkQueue *pq)
{
	assert(pq != NULL);
	LinkQueueNode *p = pq->head;
	int size = 0;
	while (p)
	{
		size++;
		p = p->link;
	}
	return size;

}

bool LinkQueueEmpty(LinkQueue *pq)
{
	assert(pq != NULL);
	return pq->head == NULL;
}


void LinkQueueShow(LinkQueue *pq)
{
	assert(pq != NULL);
	LinkQueueNode *p = pq->head;
	while (p)
	{
		printf("%d ", p->data);
		p = p->link;
	}
	printf("\n");
}

void LinkQueueDestroy(LinkQueue *pq)
{
	assert(pq != NULL);
	LinkQueueNode *p = pq->head;
	if (pq->head == pq->tail)
	{
		pq->head = pq->tail = NULL;
	}
	else
	{
		while (p)
		{
			pq->head = p->link;
			free(p);
			p = pq->head;
		}
	}
	
}


int main()
{
	LinkQueue Q;
	LinkQueueInit(&Q);
	LinkQueueEn(&Q,1);
	LinkQueueEn(&Q, 2);
	LinkQueueEn(&Q, 3);
	LinkQueueEn(&Q, 4);
	LinkQueueEn(&Q, 5);
	LinkQueueDe(&Q);
	LinkQueueShow(&Q);

	int front_val = 0;
	while (!LinkQueueEmpty(&Q))
	{
		front_val = LinkQueueFront(&Q);
		printf("%d ³ö¶Ó.\n",front_val);
		LinkQueueDe(&Q);


	}
		
	
	/*LinkQueueDe(&Q);
	LinkQueueFront(&Q);
	LinkQueueSize(&Q);*/
	LinkQueueDestroy(&Q);


	return 0;
}