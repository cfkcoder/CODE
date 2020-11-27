#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include "Common.h"

#define ElemType  int
#define SEQLIST_DEFAULT_SIZE  8
typedef struct SeqList
{
	ElemType *base;
	size_t capacity;
	size_t  size;

}Seqlist;

void SeqListInit(SeqList *plist);
void SeqListPushBack(SeqList *plist, ElemType x);
void SeqListPushPront(SeqList *plist);
void SeqListShow(SeqList *plist);

void SeqListDestroy(SeqList *plist);
void SeqListPopBack(SeqList *plist);
void SeqListPopFront(SeqList *plist);
                                            //void SeqListPopPront(SeqList *plist);
void SeqListClear(SeqList *plist);

void SeqListSort(SeqList *plist);
void SeqListEraseByPos(SeqList *plist, int pos);
void SeqListEraseVal(SeqList *plist, ElemType key);
void SeqListReserve(SeqList *plist);
void SeqListFront(SeqList *plist);
void SeqListBack(SeqList *plist);
void SeqListErase_all(SeqList *plist);

int SeqListFind(SeqList *plist, ElemType key);
int SeqListBinary_Find(SeqList *plist, ElemType x);

bool SeqListInsertByPos(SeqList *plist, int pos, ElemType x);
bool SeqListInsertByVal(SeqList *plist, ElemType x);
bool _Inc(SeqList *plist, size_t new_capacity);

size_t SeqListLength(SeqList *plist);
size_t SeqListCapacity(SeqList *plist);

//////////////////////////////////////////////

bool IsFull(Seqlist *plist)
{
	assert(plist != NULL);
	return plist->size >= plist->capacity;

}

bool IsEmpty(Seqlist *plist)
{
	assert(plist != NULL);
	return plist->size == 0;

}

void SeqListInit(SeqList *plist)
{
	assert(plist != NULL);
	plist->capacity =SEQLIST_DEFAULT_SIZE;
	plist->base = (ElemType*)malloc(sizeof(ElemType)* plist->capacity);
	plist->size = 0;
}
void SeqListPopFront(SeqList *plist)
{
	assert(plist != NULL);
	if (IsEmpty(plist))
	{
		printf("顺序表已空，不能头部删除.\n");
		return;
	}

	for (size_t i = 0; i < plist->size; i++)
	{
		plist->base[i] = plist->base[i + 1];
	}
	plist->size--;


}

void SeqListPushBack(SeqList *plist, ElemType x)
{
	assert(plist != NULL);
	if (IsFull(plist)&&!_Inc(plist,plist->capacity*2))
	{
		printf("顺序表已满，%d不能尾部插入\n",x);
		return ;
	}
	plist->base[plist->size++] = x;
}
	void SeqListShow(SeqList *plist)
	{

		assert(plist != NULL);
			size_t i = 0;
		for (i = 0; i < plist->size; ++i)
		{
			printf("%d ", plist->base[i]);
			
		}
		printf("\n");
		}

	void SeqListPushPront(SeqList *plist, ElemType x)
	{
		assert(plist != NULL);
		if (IsFull(plist)&&!_Inc(plist,plist->capacity*2))
		{
			printf("顺序表已满，%d不能头部插入", x);
			return;
		}
		
		for ( size_t i = plist->size; i>0; i--)
		{
			plist->base[i] = plist->base[i-1];

		}
		plist->base[0] = x;
		plist->size++;

	}
	void SeqListDestroy(SeqList *plist)
	{
		assert(plist!=NULL);
		free(plist->base);
		plist->base = NULL;
		plist->size = plist->capacity = 0;
}
	void SeqListPopBack(SeqList *plist)
	{
		assert(plist != NULL);
		if (IsEmpty(plist))
		{
			printf("顺序表已空，不能尾部删除.\n");
			return;
		}
		plist->size--;
	}

	void SeqListEraseByPos(SeqList *plist, int pos)
	{
		assert(plist != NULL);
		if (IsEmpty(plist))
		{
			printf("顺序表为空，不能在%d的位置删除数据.\n",pos);
			return;
		}
		if (pos <0||pos >= plist->size)
		{
			printf("删除的位置非法，不能删除数据.\n");
			return;
		}


		for (size_t i = pos; i < plist->size;i++)
		{
			plist->base[i] = plist->base[i + 1];
		}
		plist->size--;
	}

	void SeqListEraseVal(SeqList *plist, ElemType key)
	{
		assert(plist != NULL);
		/*if (IsEmpty(plist))
		{
			printf("顺序表为空，不能删除");
			return;
		}*/

		int pos = SeqListFind(plist, key);
		if (pos==-1)
		{
			return;
}
		SeqListEraseByPos(plist, pos);
		
		
		
	}

	void SeqListReserve(SeqList *plist)
	{

		assert(plist != NULL);
		if (plist->size==1)
		{
			return;
		}
		int start = 0, end = plist->size - 1;
		while (start < end)
		{
			/*int temp = plist->base[start];
			plist->base[start] = plist->base[end];
			plist->base[end] = temp;*/
			Swap(&plist->base[start], &plist->base[end]);
			start++;
			end--;
	}
	}

	void SeqListFront(SeqList *plist)
	{
		assert(plist != NULL);
		if (IsEmpty(plist))
		{
			printf("顺序表已空，不能取表头数据.\n");
			return;
		}
		printf("%d\n", plist->base[0]);

}

	void SeqListBack(SeqList *plist)
	{
		assert(plist != NULL);
		if (IsEmpty(plist))
		{
			printf("顺序表已空，不能取尾部数据.\n");
			return;
		}
		printf("%d\n", plist->base[plist->size - 1]);
	}

int SeqListBinary_Find(SeqList *plist,ElemType x)
	{
	assert(plist != NULL);
	if (IsEmpty(plist))
	{
		return -1;
	}
		int start = 0;
		int end = plist->size - 1;
		while (start <= end)
		{
			int mid = (start + end) / 2;
			if (x < plist->base[mid])
			{
				end = mid;
				end--;
			}
			else if (x>plist->base[mid])
			{
				start = mid;
				start++;
			}
			else
			{
				return mid;
		}
			
	}
		return -1;
}
void SeqListErase_all(SeqList *plist)
{

}
bool SeqListInsertByPos(SeqList *plist, int pos, ElemType x)
	{
		assert(plist != NULL);
		if (IsFull(plist)&&!_Inc(plist,plist->capacity*2))
		{
			printf("顺序表已满，%d不能在%d位置处插入.\n", x, pos);
			return false;
		}
		if (pos > plist->size || pos < 0)
		{
			printf("要插入的位置是[%d]是非法位置，%d不能插入.\n", pos, x);
			return false;
		}
		for (size_t i = plist->size; i>pos; --i)
		{
			
			plist->base[i] = plist->base[i - 1];
		}
		plist->base[pos] = x;
		plist->size++;
		return true;
	}

bool SeqListInsertByVal(SeqList *plist, ElemType x)
{
assert(plist != NULL);
	if (IsFull(plist)&&!_Inc(plist,plist->capacity*2))
	{
		printf("顺序表已满，%d不能插入.\n", x);
		return false;
}
#if 0
	size_t pos = 0;
	while (pos < plist->size && x>plist->base[pos])
	{
		pos++;
	}
	for (size_t i = plist->size; i >pos; i--)
	{

		plist->base[i] = plist->base[i - 1];
	}
	plist->base[pos] = x;
	plist->size++;
	//return true;
#endif

	size_t end = plist->size - 1;
	while (end >= 0 && x < plist->base[end])
	{
		plist->base[end + 1] = plist->base[end];
		end--;
	}
	plist->base[end + 1] = x;
	plist->size++;
	return true;
}

bool _Inc(SeqList *plist, size_t new_capacity)
{
#if 0
	assert(plist != NULL&&new_capacity>plist->capacity);
	ElemType *new_base = (ElemType*)realloc(plist->base,sizeof(ElemType)*new_capacity);
	if (new_base == NULL)
	{
		return false;
	}
	plist->base = new_base;
	plist->capacity = new_capacity;
	return true;
#endif
	assert(plist != NULL&&new_capacity>plist->capacity);
	ElemType *new_base = (ElemType*)malloc( sizeof(ElemType)*new_capacity);
	if (new_base == NULL)
	{
		return false;
	}
	memcpy(new_base, plist->base, sizeof(ElemType)*(plist->capacity));
	free(plist->base);

	plist->base = new_base;
	plist->capacity = new_capacity;
	return true;









}

	void SeqListClear(SeqList *plist)
	{
		assert(plist != NULL);
		plist->size--;
	}
	
	
	void SeqListSort(SeqList *plist)
	{
		assert(plist != NULL);
		for (size_t i = 0; i < plist->size - 1; i++)
		{
			for (size_t j = 0; j < plist->size - i - 1; j++)
			{
				if (plist->base[j] >plist->base[j +1])
				{
					Swap(&plist->base[j], &plist->base[j + 1]);
				}
			}
		}


	}
	
	size_t SeqListLength(SeqList *plist)
	{

		return plist->size;
	}

	size_t SeqListCapacity(SeqList *plist)
	{
		assert(plist != NULL);
		return plist->capacity;
	}

	int SeqListFind(SeqList *plist, ElemType key)
	{
		assert(plist!=NULL);
		/*if (IsEmpty(plist))
		{
			printf("顺序表为空，找不到关键值");
		}*/
		int pos = 0;
		while (pos < plist->size&&key != plist->base[pos])
		{
			pos++;
		}
		if (pos == plist->size)
		{
			pos = -1;
			return pos;
		}
		return pos;
	}



#endif /* _SEQLIST_H_ */