#ifndef _DLIST_H_
#define _DLIST_H_


#include "Common.h"

typedef struct DListNode{
	ElemType data;
	DListNode *next;
	DListNode *prev;


}DListNode;


typedef  DListNode*  DList;









#endif /*_DLIST_*/