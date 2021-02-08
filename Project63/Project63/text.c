#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#pragma warning(disable:4996)

typedef int SLDatatype;

typedef  struct  SeqList{
	SLDatatype *a;
	int size;
	int capacity;

}SeqList;


void SeqListInit(SeqList *ps1)
{

	assert(ps1);

	ps1->a = (SLDatatype*)malloc(sizeof(SLDatatype)*4);
	if (ps1->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps1->size = 0;
	ps1->capacity = 4;

}

void CheckCapacity(SeqList *ps1)
{
	if (ps1->size == ps1->capacity)
	{
		//ps1->a = (SLDatatype*)realloc(ps1->a, (ps1->capacity*2)*sizeof(SLDatatype));
		SLDatatype *tmp = (SLDatatype*)realloc(ps1->a, sizeof(SLDatatype)*ps1->capacity * 2);
		if (tmp == NULL)
		{
			printf("malloc fail\n");
			exit(-1);
		}
		ps1->a = tmp;
		ps1->capacity *= 2;
	}

}
void SeqListInsert(SeqList *ps1, int pos, SLDatatype x)
{
	assert(ps1);
	assert(pos >= 0 && pos <= ps1->size);
	CheckCapacity(ps1);
	for (int i = ps1->size - 1; i >= pos; i--)
	{
		ps1->a[i + 1] = ps1->a[i];
	}
	ps1->a[pos] = x;
	ps1->size++;

}
void SeqListErase(SeqList *ps1, int pos)
{
	assert(ps1);
	assert(ps1->size > 0);
	assert(pos >= 0 && pos < ps1->size);
	for (int i = pos; i <ps1->size - 1; i++)
	{
		ps1->a[i] = ps1->a[i + 1];
	}

	ps1->size--;

}

void SeqListPushBack(SeqList *ps1, SLDatatype x)
{

	//assert(ps1);
	////assert(ps1->size < ps1->capacity);
	//
	///*while (ps1->a[ps1->size])
	//{
	//	ps1->size++;
	//}*/
	//
	//CheckCapacity(ps1);
	//ps1->a[ps1->size] = x;
	//ps1->size++;
	
	SeqListInsert(ps1, ps1->size, x);
}

void SeqListPushFront(SeqList *ps1, SLDatatype x)
{
	//assert(ps1);
	////assert(ps1->size < ps1->capacity);
	//CheckCapacity(ps1);

	//for (int i =ps1->size-1; i>=0; --i)
	//{
	//	ps1->a[i + 1] = ps1->a[i];
	//}
	//ps1->a[0] = x;
	//ps1->size++;

	SeqListInsert(ps1, 0, x);
}


void SeqListPrint(SeqList *ps1)
{
	assert(ps1);
	for (int i = 0; i < ps1->size; i++)
	{
		printf("%d ", ps1->a[i]);
	}
	printf("\n");

}

void SeqListPopFront(SeqList *ps1)
{/*

	assert(ps1);
	assert(ps1->size > 0);

		for (int i = 0; i < ps1->size - 1; i++)
		{
			ps1->a[i] = ps1->a[i + 1];
		}
		ps1->size--;*/
	SeqListErase(ps1, 0);
	




}

void SeqListPopBack(SeqList *ps1)
{
	/*assert(ps1);
	assert(ps1->size > 0);
	ps1->size--;*/
	SeqListErase(ps1, ps1->size - 1);


}




void SeqListDestroy(SeqList *ps1)
{

	free(ps1->a);
	ps1->a = NULL;
	ps1->size = ps1->capacity = 0;
	
}


void SeqListTest1()
{
	SeqList s1;
	//SLDatatype x;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushFront(&s1, 0);
	/*SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);*/
	SeqListPopFront(&s1);
	


	//SeqListPushFront(&s1, x);
	//SeqListPopBack(&s1);
	//SeqListPopFront(&s1);
	SeqListPrint(&s1);


	SeqListDestroy(&s1);
}


void SeqListTest2()
{

	SeqList s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushFront(&s1, 99);
	SeqListPushBack(&s1,88);
	//SeqListInsert(&s1, 2, 0);
	SeqListFind(&s1, 3);
	SeqListPrint(&s1);

	SeqListPopFront(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);

	SeqListDestroy(&s1);




}
int main()
{

	SeqListTest1();
	SeqListTest2();

	




	return 0;
}