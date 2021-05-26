#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#pragma warning(disable:4996)

typedef char BTDataType;

typedef struct BinaryTreeNode{


	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;


}BTNode;
//
//BTNode* CreateBTNode(int x)
//{
//	BTNode *node = (BTNode*)malloc(sizeof(BTNode));
//	node->_data = x;
//	node->_left = NULL; 
//	node->_right = NULL;
//
//	return node;
//}

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		//printf("NULL ");
		return;
	}

	printf("%c ", root->_data);
	PrevOrder(root->_left);
	PrevOrder(root->_right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		//printf("NULL ");
		return;
	}
	InOrder(root->_left);
	printf("%c ", root->_data);
	InOrder(root->_right);

}


void PostOrder(BTNode* root)
{

	if (root == NULL)
	{
		//printf("NULL ");
		return;
	}

	PostOrder(root->_left);
	PostOrder(root->_right);
	printf("%c ", root->_data);

}



BTNode *CreateBTNode1(char *s, int *i)
{


	if (s[*i] == '#' || s[*i] == '\0')
	{

		(*i)++;
		return NULL;


	}


	else{
		
		BTNode *t = (BTNode*)malloc(sizeof(BTNode));
		assert(t != NULL);
		t->_data = s[*i];
		(*i)++;
		t->_left = CreateBTNode1(s, i);
		
		t->_right = CreateBTNode1(s, i);
		return t;

	}


}

void BinaryTreeDestroy(BTNode *root)
{

	if (root)
	{

		BinaryTreeDestroy(root->_left);
		BinaryTreeDestroy(root->_right);
		free(root);
		root = NULL;


	}

	else{

		return;
	}

}

void BinaryTreeLevelOrder(BTNode* root)
{

	Queue qu;
	BTNode *cur;
	QueueInit(&qu);

	QueuePush(&qu, root);
	while (!QueueEmpty(&qu))
	{
		cur = QueueFront(&qu);
		printf("%c ", cur->_data);

		if (cur->_left)
		{
			QueuePush(&qu, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&qu, cur->_right);
		}

		QueuePop(&qu);

	}

}

int BinaryComplete(BTNode *root)
{
	Queue qu;
	int targ = 0;
	BTNode *cur;
	QueueInit(&qu);
	QueuePush(&qu, root);

	while (!QueueEmpty(&qu))
	{

		cur = QueueFront(&qu);
		//putchar(cur->_data);

		if (cur->_left == NULL&&cur->_right != NULL)
		{
			return 0;
		}
		if (targ&&(cur->_left || cur->_right))
		{
			return 0;
		}

		if (cur->_left)
		{
			QueuePush(&qu, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&qu, cur->_right);
		}

		else{

			targ = 1;

		}
		QueuePop(&qu);



	}

	QueueDestroy(&qu);
	return 1;



}
int BinaryTreeSize(BTNode* root)
{

	if (root==NULL)
	{
		return 0;

	}

	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;


}
int BinaryTreeLeafSize(BTNode* root)
{

	int leafnum = BinaryTreeSize(root);
	return leafnum-1;

}
int BinaryTreeLevelSize(BTNode* root,int k)
{
	if (k == 0 || root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}

	return BinaryTreeLevelSize(root->_left,k-1) + BinaryTreeLevelSize(root->_right,k-1);


}

BTNode *BinaryTreeFind(BTNode* root,BTDataType key)
{

	if (root == NULL||root->_data==key)
	{
		return root;

	}

	BTNode *p = BinaryTreeFind(root->_left, key);

	if (p != NULL)
	{
		return p;

	}

	return BinaryTreeFind(root->_right, key);

}

int BinTreeNodeHeight(BTNode* root)
{

	if (root==NULL)
	{
		return 0;
	}

	int left = BinTreeNodeHeight(root->_left);
	int right = BinTreeNodeHeight(root->_right);
	return (left > right ? left : right) + 1;


}


//
//void Test1()
//{
//	BTNode *A = CreateBTNode('A');
//	BTNode *B = CreateBTNode('B');
//	BTNode *C = CreateBTNode('C');
//	BTNode *D = CreateBTNode('D');
//	BTNode *E = CreateBTNode('E');
//	BTNode *F = CreateBTNode('F');
//	BTNode* G = CreateBTNode('G');
//	A->_left = B;
//	A->_right = C;
//	B->_left = D;
//	B->_right = E;
//	C->_left = F;
//	C->_right = G;
//
//
//	PrevOrder(A);
//
//
//
//}
void Test2()
{

	//char *s = "ABC##DE##F##G#H##";
	char *s = "ABC##D##EF##G##";
	//char *s = "AB##C##";
	int i = 0;
	BTNode* root=CreateBTNode1(s, &i);
	printf("PrevOrder:");
	PrevOrder(root);
	printf("\n");
	printf("InOrder:");
	InOrder(root);
	printf("\n");
	printf("PostOrder:");
	PostOrder(root);
	printf("\n");
	printf("LevelOrder:");
	BinaryTreeLevelOrder(root);
	printf("\n");

	int k=BinaryComplete(root);
	if (k == 1)
	{
		printf("是完全二叉树！\n");
	}
	else{

		printf("不是完全二叉树！\n");
	}
	


	int heigh = BinTreeNodeHeight(root);
	printf("heigh=%d \n", heigh);
	int Size = BinaryTreeSize(root);
	printf("Size=%d \n", Size);

	int size = BinaryTreeLeafSize(root);
	printf("size=%d \n", size);
	int knum=BinaryTreeLevelSize(root,3);
	printf("knum=%d ", knum);




}

int main()
{


	//Test1();
	Test2();

	return 0;

}