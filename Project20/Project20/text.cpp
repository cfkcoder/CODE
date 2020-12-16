#include <stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)


#define Elemtype int

typedef struct LinkQueueNode{
	Elemtype data;
	struct LinkQueueNode *link;

}LinkQueueNode;


typedef struct LinkQueue{

	LinkQueueNode *head;
	LinkQueueNode *tail;

}LinkQueue;


 void LinkQueueEn(LinkQueue *pq, Elemtype x)
{
	assert(pq != NULL);
	LinkQueueNode *node= (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(node != NULL);
	node->data = x;
	node->link = NULL;
	if (pq->head == NULL)
	{
		pq->head = pq->tail = node;

	}
	else
	{
		pq->tail->link = node;


	}







}

int main()
{
	LinkQueue pq;
	LinkQueueInit(&pq);
	LinkQueueEn(&pq, x);
	LinkQueueFront(&pq);
	LinkQueueDe(&pq);
	LinkQueueSize(&pq);
	LinkQueueEempty(&pq);





	return 0;
}