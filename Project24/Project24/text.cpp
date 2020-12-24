#include <stdio.h>
#pragma warning(disable:4996)
#include <assert.h>
#include <malloc.h>
//#include <bool.h>

#define ElemType int
#define QUEUE_DEFAULT_SIZE 8


typedef struct SeqQueue{
	ElemType *base;
	int front;
	int rear;
	int capacity;
	
	

}SeqQueue;

void SeqQueueInit(SeqQueue *psq, int sz = QUEUE_DEFAULT_SIZE);
void SeqQueueEn(SeqQueue *psq, ElemType x);
void SeqQueueDe(SeqQueue *psq);
bool SeqQueueEmpty(SeqQueue *psq);
bool SeqQueueFull(SeqQueue *psq);
ElemType SeqQueueSize(SeqQueue *psq);
ElemType SeqQueueFront(SeqQueue *psq);
void SeqQueueShow(SeqQueue *psq);
void SeqQueueDestroy(SeqQueue *psq);

//////////////////////////////////////
void SeqQueueInit(SeqQueue *psq,int sz)
{
	assert(psq != NULL);
	psq->front = psq->rear = 0;
	
	psq->capacity = QUEUE_DEFAULT_SIZE > sz ? QUEUE_DEFAULT_SIZE : sz;
	psq->base = (ElemType*)malloc(sizeof(ElemType)*psq->capacity);

}

bool SeqQueueEmpty(SeqQueue *psq)
{
	assert(psq != NULL);
	return psq->front == psq->rear;

}
bool SeqQueueFull(SeqQueue *psq)
{
	assert(psq != NULL);
	return psq->rear >= psq->capacity;
}

void SeqQueueEn(SeqQueue *psq, ElemType x)
{
	assert(psq != NULL);
	if (!SeqQueueFull(psq))
	{
		psq->base[psq->rear++] = x;

	}


}


void SeqQueueDe(SeqQueue *psq)
{
	assert(psq != NULL);
	if (!SeqQueueEmpty(psq))
		psq->front++;

}
ElemType SeqQueueFront(SeqQueue *psq)
{
	if (!SeqQueueEmpty(psq))
	{
		return psq->base[psq->front];
	}
}
ElemType SeqQueueSize(SeqQueue *psq)
{
	assert(psq != NULL);
	return (psq->rear - psq->front);
}


void SeqQueueShow(SeqQueue *psq)
{

	assert(psq != NULL);
	int i = 0;
	if (!SeqQueueEmpty(psq))
	{
		for (i = psq->front; i < psq->rear; i++)
		{
			printf("%d ", psq->base[i]);

		}
		printf("\n");
	}
	/*else
	{
		return ;
	
	
	}*/
	

}


void SeqQueueDestroy(SeqQueue *psq)
{
	assert(psq != NULL);
	free(psq->base);
	psq->base = NULL;
	psq->capacity = psq->front = psq->rear = 0;
}
int main()
{


	SeqQueue Q;
	SeqQueueInit(&Q);
	SeqQueueEn(&Q, 1);
	SeqQueueEn(&Q, 2);
	SeqQueueEn(&Q, 3); 
	SeqQueueEn(&Q, 4);
	
	SeqQueueShow(&Q);
	SeqQueueDe(&Q);
	SeqQueueShow(&Q);
	printf("front=%d ", SeqQueueFront(&Q));
	SeqQueueEn(&Q, 1);// 但结果入不了队列，由于已判满，所以进不去，但是一种假满！






	return 0;
}
