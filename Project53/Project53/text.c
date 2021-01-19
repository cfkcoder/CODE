#include <stdio.h>
#pragma warning(disable:4996)



BinTreeNode* BinTreeClone(BinTree t)
{

	if (t == NULL)
	{
		return NULL;
	}
	BinTreeNode* bt = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	bt->data = t->data;
	bt->leftchild = BinTreeClone(t->leftchild);
	bt->rightchild = BinTreeClone(t->rightchild);


	return t;

}


bool Equal(BinTree t1, BinTree t2)
{


	if (t1 == NULL&&t2 == NULL)
	{
		return true;

	}
	if (t1 == NULL || t2 == NULL)
	{
		return false;
	}
	return (t1->data == t2->data&&Equal(t->leftchild, t2->leftchild) && Equal(t1->rightchild, t2->rightchild));







}

int main()
{

	



	return 0;
}