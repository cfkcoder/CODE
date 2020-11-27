#ifndef _QUEUE_H_
#define _QUEUE_H_


#include "Common.h"
//链式队列

typedef struct LinkQueueNode
{
	ElemType data;
	struct LinkQueueNode *link;

}LinkQueueNode;

typedef struct LinkQueue
{
       LinkQueueNode *head;//队头指针
       LinkQueueNode *tail;//队尾指针

}LinkQueue;

void LinkQueueInit(LinkQueue *pq);
void LinkQueueEn(LinkQueue *pq,ElemType x);
void LinkQueueDe(LinkQueue *pq);
ElemType LinkQueueFront(LinkQueue *pq);
ElemType LinkQueueSize(LinkQueue *pq);
bool LinkQueueEmpty(LinkQueue *pq);
void LnkQueueShow(LinkQueue *pq);
void LinkQueueDestroy(LinkQueue *pq);


void LinkQueueInit(LinkQueue *pq)
{
	assert(pq != NULL);
	pq->head = pq->tail = NULL;
}

void LinkQueueEn(LinkQueue *pq,ElemType x)
{
	assert(pq != NULL);
	LinkQueueNode *node = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(node != NULL);
	node->data = x;
	node->link = NULL;

	if (pq->head==NULL)
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
	if (pq->head != NULL)
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
ElemType LinkQueueSize(LinkQueue *pq)
{
	assert(pq != NULL);
	int size = 0;
	LinkQueueNode *p=pq->head;
	while (p!= NULL)
	{
		p = p->link;
		size++;
		
	}
	return size;

}

ElemType LinkQueueFront(LinkQueue *pq)
{
	assert(pq != NULL);
	assert(pq->head != NULL);
	return pq->head->data;

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
	while (p != NULL)
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
	while (p != NULL)
	{
		
		pq->head = p->link;
		free(p);
		p = pq->head;
	}

}


//顺序队

#define _QUEUE_DEFAULT_SIZE 8

typedef struct SeqQueue{

	ElemType *base;
	int capacity;
	int front;
	int rear;

}SeqQueue;


void SeqQueueInit(SeqQueue *psq, int sz = _QUEUE_DEFAULT_SIZE);
void SeqQueueEn(SeqQueue *psq,ElemType x);
void SeqQueueDe(SeqQueue *psq);
ElemType SeqQueueFront(SeqQueue *psq);
ElemType SeqQueueSize(SeqQueue *psq);
bool SeqQueueEmpty(SeqQueue *psq);
bool SeqQueueFull(SeqQueue *psq);
void SeqQueueShow(SeqQueue *psq);
void SeqQueueDestroy(SeqQueue *psq);


///////////////////////////////////////////////////////////////////
void SeqQueueInit(SeqQueue *psq,int sz)
{
	assert(psq != NULL);
	psq->capacity = sz > _QUEUE_DEFAULT_SIZE ? sz : _QUEUE_DEFAULT_SIZE;
	psq->base = (ElemType*)malloc(sizeof(ElemType) * psq->capacity);
	psq->front = psq->rear = 0;
}

void SeqQueueEn(SeqQueue *psq,ElemType x)
{

	assert(psq != NULL);
	if (!SeqQueueFull(psq))
	{
		psq->base[psq->rear] = x;
		psq->rear++;
	}
	else
	{
		printf("队已满，%d不能入队.\n", x);
		return;
	}
	
}

void SeqQueueDe(SeqQueue *psq)
{
	assert(psq != NULL);
	if (!SeqQueueEmpty(psq))
	{
		psq->front++;

	}
	else
	{
		printf("队列已空，不能出列.\n");
		return;
	}
}
ElemType SeqQueueFront(SeqQueue *psq)
{
	assert(psq != NULL);
	if (!SeqQueueEmpty(psq))
	{
		return psq->base[psq->front];
	}

}
ElemType SeqQueueSize(SeqQueue *psq)
{
	assert(psq != NULL);
	return (psq->rear-psq->front);

}
bool SeqQueueFull(SeqQueue *psq)
{
	assert(psq!=NULL);
	return (psq->rear >= psq->capacity);
}
bool SeqQueueEmpty(SeqQueue *psq)
{
	assert(psq != NULL);
	return psq->rear == psq->front;

}

void SeqQueueShow(SeqQueue *psq)
{
	assert(psq != NULL);
if (!SeqQueueEmpty(psq))
	{
		for (int i = psq->front; i < psq->rear; i++)
		{
			printf("%d ", psq->base[i]); 
		}
		printf("\n");
	}

}
void SeqQueueDestroy(SeqQueue *psq)
{
	assert(psq != NULL);
	free(psq->base);
	psq->base = NULL;
	psq->front = psq->rear = psq->capacity = 0;
}
///////////循环队

#define _QUEUE_DEFAULT_SIAE 8

typedef struct CycleSeqQueue{
	ElemType *base;
	int capacity;
	int front;
	int rear;
}CycleSeqQueue;


void CycleSeqQueueInit(CycleSeqQueue *pcq, int sz = _QUEUE_DEFAULT_SIZE);
void CycleSeqQueueShow(CycleSeqQueue *pcq);
void CycleSeqQueueEn(CycleSeqQueue *pcq,ElemType x);
void CycleSeqQueueDe(CycleSeqQueue *pcq);
void CycleSeqQueueDestroy(CycleSeqQueue *pcq);
bool CycleSeqQueueEmpty(CycleSeqQueue *pcq);
bool CycleSeqQueueFull(CycleSeqQueue *pcq);
void CycleSeqQueueFront(CycleSeqQueue *pcq);





void CycleSeqQueueInit(CycleSeqQueue *pcq, int sz)
{
	assert(pcq != NULL);
	pcq->capacity = sz > _QUEUE_DEFAULT_SIZE ? sz : _QUEUE_DEFAULT_SIZE;
	pcq->base = (ElemType*)malloc(sizeof(ElemType)*(pcq->capacity+1));
	pcq->front = pcq->rear = 0;
	
}
void CycleSeqQueueShow(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	assert(pcq != NULL);
	int i = 0;
	for (i = pcq->front; i !=pcq->rear;)
	{
		printf("%d ", pcq->base[i]);
		i = (i + 1) % (pcq->capacity+1);
	}
	printf("\n");
}

void CycleSeqQueueEn(CycleSeqQueue *pcq,ElemType x)
{
	assert(pcq != NULL);
	if (CycleSeqQueueFull(pcq))
	{
		printf("队列已满，%d不能入队.\n",x);
		return;
	}
	pcq->base[pcq->rear] = x;
	pcq->rear = (pcq->rear + 1) % (pcq->capacity + 1);

}

void CycleSeqQueueDe(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	if (CycleSeqQueueEmpty(pcq))
	{
		printf("队列已空，不能出队");
	}
	pcq->front = (pcq->front + 1) % (pcq->capacity + 1);

}
bool CycleSeqQueueFull(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	return (pcq->rear + 1) % (pcq->capacity + 1) == pcq->front;


}

bool CycleSeqQueueEmpty(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	return pcq->front == pcq->rear;
}
ElemType CycleSeqQueueSize(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	size_t size = 0;
	size_t i= 0;
	for (i = pcq->front; i != pcq->rear; )
	{
		size++;
		i = (i + 1) % (pcq->capacity + 1);
	}

	return size;
}
void CycleSeqQueueDestroy(CycleSeqQueue *pcq)
{
	assert(pcq != NULL);
	free(pcq->base);
	pcq->base = NULL;
	pcq->front = pcq->rear =pcq->capacity= 0;
}
#endif 