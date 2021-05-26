#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


struct BinaryTreeNode;
typedef struct BinaryTreeNode* QDataType;
typedef struct QueueNode{


	struct QueueNode *next;
	QDataType data;


}QueueNode;


typedef struct Queue
{
	QueueNode *front;
	QueueNode *tail;

}Queue;

void QueueInit(Queue *pq);
void QueuePush(Queue *pq,QDataType x);
void QueuePop(Queue *pq);
QDataType QueueFront(Queue *pq);
QDataType QueueBack(Queue *pq);
int QueueSize(Queue *pq);
int QueueEmpty(Queue *pq);
void QueueDestroy(Queue *pq);
