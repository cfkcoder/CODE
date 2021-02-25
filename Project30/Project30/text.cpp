#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

#pragma warning(disable:4996)
#define BinTreeElemType char


struct BinTreeNode;

typedef BinTreeNode* LinkQueueElemType;


typedef struct LinkQueueNode
{
	LinkQueueElemType data;
	struct LinkQueueNode *link;

}LinkQueueNode;

typedef struct LinkQueue
{

	LinkQueueNode *head;//队头指针
	LinkQueueNode *tail;//队尾指针


}LinkQueue;

void LinkQueueInit(LinkQueue *pq);
void LinkQueueEn(LinkQueue *pq, LinkQueueElemType x);
void LinkQueueDe(LinkQueue *pq);
LinkQueueElemType LinkQueueFront(LinkQueue *pq);
int LinkQueueSize(LinkQueue *pq);
bool LinkQueueEmpty(LinkQueue *pq);
void LnkQueueShow(LinkQueue *pq);
void LinkQueueDestroy(LinkQueue *pq);



void LinkQueueInit(LinkQueue *pq)
{
	assert(pq != NULL);
	pq->head = pq->tail = NULL;
}

void LinkQueueEn(LinkQueue *pq, LinkQueueElemType x)
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

	/*assert(pq != NULL);
	QueueLinkNode *node = pq->head;
	if (node != NULL&&pq->head!=pq->tail)
	{
	pq->head = node->link;
	free(node);
	}
	else
	{
	free(pq->head);  我认为要先释放堆上的空间，再赋值为NULL;
	free(pq->tail);
	pq->head = NULL;
	pq->tail = NULL;
	}*/



}
int LinkQueueSize(LinkQueue *pq)
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

LinkQueueElemType LinkQueueFront(LinkQueue *pq)
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





/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

typedef struct BinTreeNode{


	BinTreeElemType data;
	struct BinTreeNode *leftChild;
	struct BinTreeNode *rightChild;


}BinTreeNode;

typedef BinTreeNode* BinTree;


//二叉树的创建
void BinTreeinit(BinTree *t);
void BinTreeCreate(BinTree *t);
BinTree BinTreeCreate_1();
BinTree BinTreeCreate_2(const char *s,int *i);

//二叉树的遍历
void BinTreeVLR(BinTree t);
void BinTreeLVR(BinTree t);
void BinTreeLRV(BinTree t);
void BinTreeLevel(BinTree t);

int Size(BinTree t);
int Height(BinTree t);
BinTreeNode* Left(BinTreeNode *p);
BinTreeNode* Right(BinTreeNode *p);
BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key);
BinTreeNode* BinTreeParent(BinTree t, BinTreeNode *p);
BinTreeNode* BinTreeClone(BinTree t);
bool Equal(BinTree t1, BinTree t2);

void BinTreeInit(BinTree *t)
{
	assert(t != NULL);
	*t = NULL;

}
//
//void BinTreeCreate(BinTree *t)
//{
//
//	assert(t != NULL);
//	BinTreeElemType x;
//	scanf("%c", &x);
//	if (x == '#')
//	{
//		*t = NULL;
//	}
//	else
//	{
//		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		assert(*t != NULL);
//		(*t)->data = x;
//		BinTreeCreate(&(*t)->leftChild);
//		BinTreeCreate(&(*t)->rightChild);
//	}
//
//}
//
//BinTree BinTreeCreate_1()
//{
//
//	BinTreeElemType item;
//	scanf("%c", &item);
//	if (item == '#')
//	{
//		return NULL;
//	}
//	else
//	{
//		BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		t->data = item;
//		t->leftChild = BinTreeCreate_1();
//		t->rightChild = BinTreeCreate_1();
//		return t;
//	}
//
//	
//
//
//}

BinTree BinTreeCreate_2(const char *s,int *i)
{

	assert(s != NULL);
	if (s[*i] =='\0'||s[*i]=='#')
	{
		return NULL;
	}
	else
	{
		BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = s[*i];
		++(*i);
		t->leftChild = BinTreeCreate_2(s,i);
		(*i)++;
		t->rightChild = BinTreeCreate_2(s,i);
		return t;

	}
	
	
}


int Size(BinTree t)
{

	int size = 0;
	if (t != NULL)
	{
		size++;
		size += Size(t->leftChild);
		size += Size(t->rightChild);
	}
	else
	{
		return 0;
	}
	return size;
	
//
//	if (t == NULL)
//	{
//		return 0;
//	}
//
//	else
//	{
//		return (Size(t->leftChild) + Size(t->rightChild) + 1);//二叉树节点个数=左子树节点个数+右子数节点个数+根节点
//	}
//
//
}

int Height(BinTree t)
{
	if (t == NULL)
	{
		return 0;
	}
	else
	{
		int left_h = Height(t->leftChild);
		int right_h = Height(t->rightChild);
		return (left_h > right_h ? left_h : right_h) + 1;

	}
}

void BinTreeLVR(BinTree t)
{
	if (t != NULL)
	{
		BinTreeLVR(t->leftChild);
		printf("%c ", t->data);
		BinTreeLVR(t->rightChild);
	}
	
}

void BinTreeVLR(BinTree t)
{

	if (t != NULL)
	{
		printf("%c ", t->data);
		BinTreeVLR(t->leftChild);
		BinTreeVLR(t->rightChild);
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

			BinTreeNode* p = LinkQueueFront(&Q);
			printf("%c ", p->data);
			LinkQueueDe(&Q);
			if (p->leftChild != NULL)
				LinkQueueEn(&Q, p->leftChild);
			if (p->rightChild != NULL)
				LinkQueueEn(&Q, p->rightChild);


		}
		LinkQueueDestroy(&Q);

	}

}

BinTreeNode* Left(BinTreeNode *p)
{
	assert(p != NULL);
	return p->leftChild;
}

BinTreeNode* Right(BinTreeNode *p)
{
	assert(p != NULL);
	return p->rightChild;
}

BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key)
{
	//assert(t != NULL);        树是可以为空的
	if (t==NULL||t->data == key)
	{
		return t;
	}
	else
	{
		BinTreeNode* p=BinTreeFind(t->leftChild, key);
		if (p != NULL)
		{
			return p;
		}
		return BinTreeFind(t->rightChild, key);
	}
	


}

BinTreeNode* BinTreeParent(BinTree t, BinTreeNode* p)
{

	if (p==NULL|| t == NULL || p == t)
	{
		return NULL;
	}
	if (t->leftChild == p || t->rightChild == p)
	{
		return t;
	}
	

		BinTreeNode* pr=BinTreeParent(t->leftChild, p);
		if (pr != NULL)
		{
			return pr;
		}
		return BinTreeParent(t->rightChild, p);
	
	
}


BinTreeNode* BinTreeClone(BinTree t)
{
	if (t == NULL)
	{
		return NULL;
	}
	else
	{
		BinTreeNode *pt = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		pt->data = t->data;
		pt->leftChild = BinTreeClone(t->leftChild);
		pt->rightChild = BinTreeClone(t->rightChild);
		return pt;

	}
}

bool Equal(BinTree t1, BinTree t2)
{

/*
	if (t1 == NULL&&t2 == NULL)
	{
		return true;
	}
	if ((t1== NULL&&t2 != NULL)||(t1!=NULL&&t2==NULL)||(t1->data!=t2->data))
	{
		return false;
	}

	

		bool flag=Equal(t1->leftChild, t2->leftChild);
		if (!flag)
		{
			return false;
		}
		

		bool flag = Equal(t1->rightChild, t2->rightChild);
		if (!flag)
		{
			return false;
		}
		return true;
		
*/
	if (t1 == NULL&&t2 == NULL)
	{
		return true;
	}
	if (t1 == NULL || t2 == NULL)
	{
		return false;
	}
	return (t1->data == t2->data&&Equal(t1->leftChild, t2->leftChild) && (t1->rightChild, t2->rightChild));

		


}


int main()
{
	//
	const char *str = "ABC##DE##F##G#H##";

	BinTree bt;
	BinTreeInit(&bt);
	int index = 0;
	//bt = BinTreeCreate_1();
	bt = BinTreeCreate_2(str,&index);

	char key = 'B';
	BinTreeNode* p = BinTreeFind(bt, key);
	printf("%c\n", p->data);
	BinTreeNode *pr=BinTreeParent(bt, p);
	printf("%c\n", pr->data);

	BinTree bb = BinTreeClone(bt);

	//BinTreeCreate(&bt);
	//printf("size=%d\n", Size(bt));


	//先序：
	printf("VLR: ");
	BinTreeVLR(bt);
	printf("\n");
	//中序：
	printf("LVR:");
	BinTreeLVR(bt);
	printf("\n");

	//后序：
	printf("LRV: ");
	BinTreeLRV(bt);
	printf("\n");

	//层次遍历
	printf("Level: ");
	BinTreeLevel(bt);
	printf("\n");

	printf("size=%d\n", Size(bt));
	printf("height=%d\n", Height(bt));
	
	return 0;

}


                                                   //先序;ABDFCE
                                                   //中序;BFDAEC
                                                   //后序;FDBECA











