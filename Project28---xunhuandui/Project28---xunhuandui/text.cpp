#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <cstdbool>
#pragma warning(disable:4996)
#define ElemType int
#define _QUEUE_SIZE_ 8


//进行扩容考虑
typedef struct CycleSeqQueue{
	ElemType *base;
	int rear;
	int front;
	int capacity;



}CycleSeqQueue;


void CycleSeqQueueInit(CycleSeqQueue *pcq,int sz=_QUEUE_SIZE_);
void CycleSeqQueueEn(CycleSeqQueue *pcq, ElemType x);
void CycleSeqQueueDe(CycleSeqQueue *pcq);
void CycleSeqQueueDestroy(CycleSeqQueue *pcq);
ElemType CycleSeqQueueSize(CycleSeqQueue *pcq);
ElemType CycleSeqQyeyeFront(CycleSeqQueue *pcq);
void CycleSeqQueueShow(CycleSeqQueue *pcq);
bool CycleSeqQueueFull(CycleSeqQueue *pcq);
bool CycleSeqQueueEmpty(CycleSeqQueue *pcq);
/////////////////////////////////////////////////////////////////////////////////



void CycleSeqQueueInit(CycleSeqQueue *pcq, int sz)
{

	assert(pcq != NULL);
	pcq->capacity = _QUEUE_SIZE_ > sz ? _QUEUE_SIZE_ : sz;
	pcq->base = (ElemType*)malloc(sizeof(ElemType)*(pcq->capacity+1));
	pcq->front = pcq->rear = 0;

}

void CycleSeqQueueEn(CycleSeqQueue *pcq,ElemType x)
{
	assert(pcq != NULL);
	if (CycleSeqQueueFull(pcq))
	{
		printf("队已满，%d不能入队.\n",x);
	}
	else
	{
		pcq->base[pcq->rear] = x;
		pcq->rear = (pcq->rear + 1) % (pcq->capacity + 1);
	}
}



void CycleSeqQueueDe(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	if (CycleSeqQueueEmpty(pcq))
	{
		printf("队已空，不能删除.\n");
	}
	else
	{
		pcq->front=(pcq->front+1)%(pcq->capacity+1);
	}
}

ElemType CycleSeqQueueFront(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	if (!CycleSeqQueueEmpty(pcq));
	{
		return pcq->base[pcq->front];
	}
}

ElemType CycleSeqQueueSize(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	int size= 0;
	for (int i = pcq->front; i != pcq->rear;)
	{
		size++;
		i = (i + 1) % (pcq->capacity + 1);
	}
		
	return size;
	

}

void CycleSeqQueueShow(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	int i = 0;
	for (i = pcq->front; i!=pcq->rear; )
	{
		printf("%d ", pcq->base[i]);
		i = (i + 1) % (pcq->capacity + 1);
	}
	printf("\n");
    
}
bool CycleSeqQueueFull(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	return (pcq->rear + 1)%(pcq->capacity+1) == pcq->front;
}

bool CycleSeqQueueEmpty(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	return pcq->front== pcq->rear;

}
void CycleSeqQueueDestroy(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	free(pcq->base);
	pcq->base = NULL;
	pcq->front = pcq->rear = 0;
}
int main()
{

	CycleSeqQueue Q;
	CycleSeqQueueInit(&Q);
	CycleSeqQueueEn(&Q, 1);
	CycleSeqQueueEn(&Q, 2);
	CycleSeqQueueEn(&Q, 3);
	CycleSeqQueueEn(&Q, 4);
	CycleSeqQueueEn(&Q, 5);
	CycleSeqQueueEn(&Q, 6);
	CycleSeqQueueEn(&Q, 7);
	CycleSeqQueueEn(&Q, 8);
	CycleSeqQueueEn(&Q, 9);
	

	CycleSeqQueueShow(&Q);
	CycleSeqQueueDe(&Q);
	CycleSeqQueueShow(&Q);
	CycleSeqQueueEn(&Q, 9);
	CycleSeqQueueShow(&Q);



	//CycleSeqQueueShow(&Q);

	/*printf("%d\n", CycleSeqQueueSize(&Q));
	printf("%d\n", CycleSeqQueueFront(&Q));*/

	/*CycleSeqQueueDe(&Q);
	CycleSeqQueueShow(&Q);
	*/

	return 0;
}