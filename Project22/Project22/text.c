#include <stdio.h>
#pragma warning(disable:4996)

#define ElemType int

typedef struct QueueLinkNode
{
	ElemType data;
	struct QueueLinkNode *link;

}QueueLinkNode;

typedef struct LinkQueue{
	QueueLinkNode *head;
	QueueLinkNode *tail;

}LinkQueue;

void LinkQueueDe(LinkQueue *pq)
{
	/*assert(pq != NULL);
	QueueLinkNode *node = pq->head;
	if (node != NULL&&pq->head!=pq->tail)
	{
		pq->head = node->link;
		free(node);
	}
	else
	{
		free(pq->head);
		free(pq->tail);
		pq->head = NULL;
		pq->tail = NULL;
	}*/

	assert(pq != NULL);
	QueueLinkNode *p = pq->head;
	if (pq->head != NULL)
	{
		if (pq->head = pq->tail)
		{
			pq->head = pq->tail = NULL;
		}
		else
		{
			pq->head = p->link;
			free(p);
		}
	}
}

	ElemType LinkQueueFront(LinkQueue *pq)
	{
		assert(pq != NULL);
		return pq->head->data;





	}


int main()
{

	

}