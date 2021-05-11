#include "Stack.h"


//后进先出
void StackInit(Stack *pst)
{

	assert(pst);
	pst->top = 0;
	pst->a = (STDataType*)malloc(sizeof(STDataType)* 4);
	pst->capacity = 4;


}


void StackPush(Stack *pst,STDataType x)
{
	assert(pst);
		if (pst->top == pst->capacity)
		{
			STDataType *tmp = realloc(pst->a, pst->capacity * 2 * sizeof(STDataType));
			if (tmp == NULL)
			{
				printf("realloc fail");
				exit(-1);
			}
			
				pst->a = tmp;
				pst->capacity *= 2;

			
		}
		pst->a[pst->top] = x;
		pst->top++;
	


}
void StackPop(Stack *pst)
{
	assert(pst);
	if (!EmptyStack(pst))
	{
		pst->top--;
	}


}
void StackDestroy(Stack *pst)
{

	free(pst->a);
	pst->a = NULL;
	pst->capacity = pst->top = 0;



}
STDataType StackSize(Stack *pst)
{
	assert(pst);
	return pst->top;


}
STDataType StackTop(Stack *pst)
{
	assert(pst);
	assert(!EmptyStack(pst));
	
		return pst->a[pst->top - 1];
	

}

int EmptyStack(Stack *pst)
{
	assert(pst);
	return pst->top == 0 ? 1 : 0;
}