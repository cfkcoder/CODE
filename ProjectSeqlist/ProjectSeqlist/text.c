#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

#pragma warning(disable:4996)
typedef int SLDataType;

typedef struct SeqList{

	SLDataType *a;
	int size;
	int capacity;

}SeqList;



void SeqListInit(SeqList *ps)
{

	 ps->size = 0;
     ps->capacity = 20;
	 ps->a = (SLDataType*)malloc(sizeof(SLDataType)*(ps->capacity));
	 if (ps->a == NULL)
	 {
		 printf("malloc fail");
		 exit(-1);
	 }


}

bool CheckCapacity(SeqList *ps)
{

	assert(ps);
	if (ps->size < ps->capacity)
	{
		return true;
	}
	return false;

}

void SeqListPushFront(SeqList *ps, SLDataType x)
{
	assert(ps);
	if (CheckCapacity(ps))
	{
		for (int i = ps->size-1; i>=0; i--)
		{

			ps->a[i+1] = ps->a[i];
		}
		ps->a[0] = x;

	}
	ps->size++;

	
}


void SeqListPushBack(SeqList *ps,SLDataType x)
{

	assert(ps);
	if (CheckCapacity(ps))
	{
		ps->a[ps->size] = x;
		ps->size++;

	}
}


void SeqListPopFront(SeqList *ps)
{
	assert(ps);
	if (CheckCapacity(ps))
	{
		for (int i = 1; i <= ps->size; i++)
		{
			ps->a[i - 1] = ps->a[i];
		}
		ps->size--;
	}
	


}

void SeqListPopBack(SeqList *ps)
{

	assert(ps);
	ps->size--;

}


void SeqListInsert(SeqList *ps, int pos,SLDataType x)
{

	assert(ps);
	if (CheckCapacity(ps))
	{
		for (int i = ps->size-1; i>=pos; i--)
		{
			ps->a[i+1] = ps->a[i];
		}
	}
	ps->a[pos] = x;
	ps->size++;
	
}

void SeqListErase(SeqList *ps,int pos)
{

	assert(ps);
	if (ps->size == 0)
	{
		return;
	}
	for (int i =pos+1; i <=ps->size; i++)
	{
		ps->a[i-1] = ps->a[i];
	}
	ps->size--;

}

int SeqListFind(SeqList *ps, SLDataType x)
{

	    assert(ps);
	    for (int i = 0; i < ps->size; i++)
	   {

	      if (ps->a[i] == x)
			{

			  
				return i;


			 }

	   }
	
	  return 0;
}

void SeqListPrint(SeqList *ps)
{

	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d->", ps->a[i]);
	}
	printf("NULL\n");

}
void SeqListDestroy(SeqList *ps)
{

	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;


}
int main()
{

	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushFront(&s, 8);
	SeqListInsert(&s, 3, 11);
	SeqListPrint(&s);
	

	SeqListInsert(&s, 3,11);
	SeqListInsert(&s, 3,12);
	SeqListInsert(&s, 3,13);
	SeqListErase(&s, 3);
	SeqListErase(&s, 3);

	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	int result=SeqListFind(&s,11);
	printf("%d\n", result);
	
	/*SeqListInsert(&s,4);
	SeqListPopBack(&s);
	SeqListPopFront(&s);
*/
	SeqListDestroy(&s);


	return 0;
}