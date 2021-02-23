#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


typedef int DListNodeType;

typedef struct DListNode{

	struct DListNode* prev;
	struct DListNode* next;
	DListNodeType data;


}DListNode;


DListNode* DListInit()
{
	DListNode *phead = (DListNode *)malloc(sizeof(DListNode));
	(phead)->next = (phead)->prev = phead;

	return phead;


}


DListNode *_BuyNode(DListNodeType x)
{
	DListNode *newnode = (DListNode*)malloc(sizeof(DListNode));
	newnode->next = newnode->prev = newnode;
	newnode->data = x;

	return newnode;

}

void DListPushBack(DListNode *phead,DListNodeType x)
{

	DListNode* newnode = _BuyNode(x);
	DListNode *head = phead;
	while (head->next != phead)
	{
		head = head->next;
	}

	head->next = newnode;
	newnode->prev = head;
	newnode->next = phead;
	phead->prev = newnode;

}

void DListPushFront(DListNode *phead);

void DListPopBack(DListNode *phead);

void DListPopFront(DListNode *phead);

void DListPrint(DListNode *phead)
{

	//printf("666");
	DListNode *head = phead->next;
	while(head != phead)
	{
		printf("%d->", head->data);
		head = head->next;

	}
	printf("NULL\n");


}

void Destroy(DListNode *phead);







int main()
{


	DListNode *phead = DListInit();
	DListPushBack(phead, 1);
	DListPushBack(phead, 2);
	DListPushBack(phead, 3);
	DListPushBack(phead, 4);
	DListPushBack(phead, 5);
	DListPushBack(phead, 6);
	DListPushBack(phead, 7);

	DListPrint(phead);

	


	return 0;
}