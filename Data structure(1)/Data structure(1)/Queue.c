#include "Queue.h"

//
//int main()
//{
//
//
//
//}


void QueueInit(Queue *pq)
{
	assert(pq);
	pq->front = pq->tail = NULL;

}
void QueuePush(Queue *pq,QDataType x)
{

	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->data = x;
	newnode->next = NULL;

	if (pq->front == NULL)
	{

		pq->front = pq->tail = newnode;

	}

	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}

}


void QueuePop(Queue* pq)
{

	assert(pq);
	assert(!QueueEmpty(pq));
	//只有一个结点
	if (pq->front == pq->tail)
	{
		free(pq->front);
		pq->front = pq->tail = NULL;
	}
    //有多个结点
	else{
		QueueNode* next = pq->front->next;
		free(pq->front);
		pq->front= next;

	}
		


}

QDataType QueueFront(Queue *pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->front->data;

}

QDataType QueueBack(Queue *pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->data;
}
int QueueSize(Queue *pq)
{
	assert(pq);
	QueueNode *cur = pq->front;
	int size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;

	}
	return size;
}

int QueueEmpty(Queue *pq)
{
	assert(pq);
	return pq->front == NULL ? 1 : 0;
}
void QueueDestroy(Queue *pq)
{

	assert(pq);
	QueueNode *cur = pq->front;
	while (cur != NULL)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->front = pq->tail = NULL;

}