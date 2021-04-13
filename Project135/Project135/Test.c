#include "Heap.h"



int main()
{


	Heap p;
	HeapInit(&p);
	HeapPush(&p, 1);
	HeapPush(&p, 2);
	HeapPush(&p, 3);
	HeapPush(&p, 4);
	HeapPush(&p, 5);
	HeapPush(&p, 6);
	HeapPush(&p, 7);
	HeapPush(&p, 8);
	HeapPop(&p);
	




	HeapDestroy(&p);









	return 0;
}