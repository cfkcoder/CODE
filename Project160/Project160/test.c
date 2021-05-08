#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)




typedef struct ListNode
{

	int data;
    struct ListNode* next;


}ListNode;

void SListInit(ListNode *phead);
//typedef ListNode* List;


void SListInit(ListNode *phead)
{

	assert(phead);
	phead = NULL;



}


int main()
{


	ListNode a;
	SListInit(&a);


	return 0;

}


//
//
//
//typedef struct SListNode
//{
//	int data;
//	struct SListNode *next;
//
//}SListNode;
//
//
//typedef SListNode*  SList;
//
//
//void SListInit(SList *phead)
//{
//	assert(phead);
//	*phead = NULL;
//}
//
//int main()
//{
//	SList a;
//	SListInit(&a);
//
//
//	return 0;
//}
