#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#pragma warning(disable:4996)


typedef int HPDataType;
typedef struct Heap{


	HPDataType* _a;
	int _size;
	int _capacity;


}Heap;


void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
int HeapTop(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
void HeapPrint(Heap *hp);
void HeapInit(Heap* hp, HPDataType* a, int n);

void AdjustDown(HPDataType* a, int n, int root);
void AdjustUp(HPDataType *a, int n, int child);
void swap(HPDataType *a, HPDataType* b);


void HeapInit(Heap *hp, HPDataType* a, int n)
{

	int i;
	assert(hp&&a);
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	hp->_size = n;
	hp->_capacity = n;

	for (i = 0; i < n; ++i)
	{
		hp->_a[i] = a[i];

	}
	for (int i = (n - 2) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_a, hp->_size, i);

	}

}


void HeapPush(Heap *hp, HPDataType x)
{

	assert(hp);
	if (hp->_size == hp->_capacity)
	{

		hp->_a= (HPDataType*)realloc(hp->_a,  2 * sizeof(HPDataType)*hp->_capacity);
		hp->_capacity *= 2;

		hp->_a[hp->_size] = x;
		hp->_size++;

		AdjustUp(hp->_a, hp->_size, hp->_size - 1);


	}

}

void HeapPop(Heap *hp)
{
	assert(hp);
	swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);


}

int HeapTop(Heap *hp)
{

	assert(hp);
	return hp->_a[0];


}

int HeapSize(Heap* hp)
{
	return hp->_size;

}

int HeapEmpty(Heap* hp)
{
	return hp->_size == 0;
}



void swap(int *a, int* b)
{

	int tmp = *a;
	*a = *b;
	*b = tmp;


}

void PrintTopK(int *a, int n, int k)
{
	int *heapA = (int*)malloc(sizeof(int)*k);
	for (int i = 0; i < k; ++i)
	{
		heapA[i] = a[i];
	}

	for (int i =(k-2)/2 ; i >=0; --i)
	{

		AdjustDown(heapA, k, i);

	}

	for (int j = k; j < n; ++j)
	{
		if (heapA[0] < a[j])
		{
			heapA[0] = a[j];
			AdjustDown(heapA, k, 0);
		}
		
	}

	for (int i = 0; i < k; ++i)
	{
		printf("%d\n", heapA[i]);
	}
	
}

void AdjustUp(HPDataType *a, int n, int child)
{
	assert(a);
	int parent = (child - 1) / 2;
	while(child>0)
	{
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;


		}
		else{
			break;
		}


		
	}

}

void AdjustDown(HPDataType* a, int n, int root)
{

	int parent = root;
	int child = parent * 2 + 1;

	while (child<n)
	{
		if (child+1<n&&a[child] > a[child + 1])
		{
			child++;
		}
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;

		}

		else{
			break;

		}

	}

	
}

void HeapPrint(Heap *hp)
{
	for (int i = 0; i < hp->_size; ++i)
	{
		printf("%d ", hp->_a[i]);

	}
	printf("\n");
}


void HeapDestroy(Heap *hp)
{
	assert(hp);
	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;

}



void Test()
{
	int n = 10000;
	int *a = (int*)malloc(sizeof(int)*n);
	srand((size_t)time(NULL));
	for (int i = 0; i <n; ++i)
	{
		a[i] = rand() % 100000;

	}

	a[111] = 9999 + 100000;
	a[222] = 888 + 100000;
	a[333] = 777 + 100000;
	a[33] = 777 + 1000007;
	a[1200] = 1200 + 100000;
	a[2400] = 2400 + 100000;
	a[4500] = 4500 + 100000;
	a[3000] = 3000 + 100000;
	a[30] = 3020 + 100000;
	a[40] = 3444 + 100000;

	PrintTopK(a, n, 10);


}

void Test1()
{
	Heap hp;
	int n = 8;
	int *a = (int*)malloc(sizeof(int)*n);
	srand((size_t)time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 100;
	}
	HeapInit(&hp, a, n);

	HeapPush(&hp, 1);
	HeapPrint(&hp);
	printf("%d\n", HeapSize(&hp));

	HeapPop(&hp);
	HeapPrint(&hp);
	printf("%d\n", HeapSize(&hp));
	HeapSize(&hp);


}


int main()
{

	//Test();
	Test1();
	
	return 0;
}