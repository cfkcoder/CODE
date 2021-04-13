#include <stdio.h>
#pragma warning(disable:4996)

typedef int HPDataType;


typedef struct Heap{
	HPDataType *a;
	int size;
	int capacity;

}Heap;



void HeapInit(Heap *php);

void HeapPush(Heap *php, HPDataType x);
void HeapPop(Heap *php);
void HeapDestroy(Heap *php);

