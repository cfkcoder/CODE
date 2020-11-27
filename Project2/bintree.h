#ifndef _BINTREE_H_
#define _BINTREE_H_

#include "Common.h"
typedef char BinTreeElemType;


struct BinTreeNode;
typedef BinTreeNode*  LinkQueueNodeElemtype;
///////////////////////////////////////////////////////////////////
typedef struct LinkQueueNode
{
	LinkQueueNodeElemtype data;
	struct LinkQueueNode *link;

}LinkQueueNode;

typedef struct LinkQueue
{
	LinkQueueNode *head;//队头指针
	LinkQueueNode *tail;//队尾指针

}LinkQueue;

void LinkQueueInit(LinkQueue *pq);
void LinkQueueEn(LinkQueue *pq, ElemType x);
void LinkQueueDe(LinkQueue *pq);
LinkQueueNodeElemtype LinkQueueFront(LinkQueue *pq);
ElemType LinkQueueSize(LinkQueue *pq);
bool LinkQueueEmpty(LinkQueue *pq);
void LnkQueueShow(LinkQueue *pq);
void LinkQueueDestroy(LinkQueue *pq);


void LinkQueueInit(LinkQueue *pq)
{
	assert(pq != NULL);
	pq->head = pq->tail = NULL;
}

void LinkQueueEn(LinkQueue *pq, LinkQueueNodeElemtype x)
{
	assert(pq != NULL);
	LinkQueueNode *node = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
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
	LinkQueueNode *p = pq->head;
	while (p != NULL)
	{
		p = p->link;
		size++;

	}
	return size;

}

LinkQueueNodeElemtype LinkQueueFront(LinkQueue *pq)
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

//////////////////////////////////////////////////////////////////
typedef struct BinTreeNode{
	ElemType data;
	struct BinTreeNode *leftChild;
	struct BinTreeNode *rightChild;


}BinTreeNode;
//ABC##DE##F##G#H##

typedef BinTreeNode* BinTree;


void BinTreeInit(BinTree *t);
void BinTreeShow(BinTree t);
void BinTreeCreate(BinTree *t);
void BinTreeDestroy(BinTree *t);
void BinTreeVLR(BinTree t);
void BinTreeLVR(BinTree t);
void BinTreeLRV(BinTree t);
void BinTreeLevel(BinTree t);
BinTreeNode* Left(BinTree p);
BinTreeNode* Right(BinTree p);
BinTreeNode* BinTreeParent(BinTree t, BinTreeNode *p);
BinTreeNode* BinTreeCopy(BinTree t);
BinTreeNode* BinTreeCreate_1();
BinTreeNode* BinTreeCreate_2(const char *s,int *i);
BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key);
bool Equal(BinTree t1, BinTree t2);
int Hight(BinTree t);
ElemType BinTreeSize(BinTree t);


void BinTreeInit(BinTree *t)
{
	//assert(t != NULL);
	*t = NULL;

}

//void BinTreeCreate(BinTree *t)
//{
//assert(t != NULL);
//BinTreeElemType item;
//scanf("%c", &item);
//if (item == '#')
//{
//
//	*t = NULL;
//}
//else
//{
//    *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//	assert(*t!= NULL);
//	(*t)->data = item;
//	BinTreeCreate(&(*t)->leftChild);
//	BinTreeCreate(&(*t)->rightChild);
//}
//}

BinTree BinTreeCreate_1()
{
	BinTreeElemType item;
	scanf("%c", &item);
	if (item == '#')
	{
		return NULL;
	}
	else
	{
		BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = item;
		t->leftChild = BinTreeCreate_1();
		t->rightChild = BinTreeCreate_1();
		return t;
	}

}
BinTreeNode* BinTreeCreate_2(const char *s,int *i)
{
	assert(s != NULL);
	if (s[*i] == '#' || s[*i] == '\0')
	{
		return NULL;
	}
	else
	{
		BinTreeNode *t= (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = s[*i];
		(*i)++;
		t->leftChild = BinTreeCreate_2(s,i);
		(*i)++;
		t->rightChild = BinTreeCreate_2(s,i);
		return t;


	}

}

ElemType BinTreeSize(BinTree t)
{
	
	if (t == NULL)
	{
		return 0;
	}
	else
	{
		return  BinTreeSize(t->leftChild)+BinTreeSize(t->rightChild)+1;
	}


}

void BinTreeVLR(BinTree t)
{
	//assert(t!=NULL);
	if (t != NULL)
	{
		printf("%c ", t->data);
		BinTreeVLR(t->leftChild);
		BinTreeVLR(t->rightChild);
}
	
	}

void BinTreeLVR(BinTree t)
{
	if (t != NULL)
	{
		BinTreeLVR(t->leftChild);
		printf("%c ", t->data);
		BinTreeLRV(t->rightChild);

	}
	
}
void BinTreeLRV(BinTree t)
{
	if (t != NULL)
	{
		BinTreeLRV(t->leftChild);
		BinTreeLRV(t->rightChild);
		printf("%c ", t->data);
	}
	
}
void BinTreeLevel(BinTree t)
{
	if (t != NULL)
	{
		LinkQueue Q;
		LinkQueueInit(&Q);
		LinkQueueEn(&Q, t);
	
		while (!LinkQueueEmpty(&Q))
		{
			BinTreeNode *p = LinkQueueFront(&Q);
			LinkQueueDe(&Q);
			printf("%c ", p->data);
			if (p->leftChild != NULL)
			{
				LinkQueueEn(&Q, p->leftChild);
			}
			if (p->rightChild != NULL)
			{
				LinkQueueEn(&Q, p->rightChild);
			}
		}
	}
}

int Hight(BinTree t)
{
	if (t == NULL)
	{
		return 0;
	}

	else
	{
		int left_h = Hight(t->leftChild);
		int right_h = Hight(t->rightChild);
		return (left_h > right_h ? left_h : right_h) + 1;
	}

}

 BinTreeNode* Left(BinTree p)
{
	 assert(p != NULL);
	 return p->leftChild;
	
}

 BinTreeNode* Right(BinTree p)
{
	 assert(p != NULL);
	 return p->rightChild;

}
//BinTreeNode* BinTreeParent(BinTree t, BinTreeNode *p)
//{
//  
//
//
//}
BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key)
{

	if (t == NULL||t->data==key )
	{
		return t;
	}
	BinTreeNode* p = BinTreeFind(t->leftChild, key);
	if (p != NULL)
	{
		return p;
	}
	return BinTreeFind(t->rightChild, key);
	
}

#endif /*_BINTREE_H_*/