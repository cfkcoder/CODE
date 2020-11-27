#ifndef _COMMON_H_
#define _COMMON_H
#include <stdbool.h>
#include <assert.h>
#include <memory.h>



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)
#define ElemType  int 
void Swap(ElemType *a, ElemType *b)
{
	ElemType temp = *a;
	*a = *b;
	*b = temp;
}

















#endif /* _COMMON_H_ */