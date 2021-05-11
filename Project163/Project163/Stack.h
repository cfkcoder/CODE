#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef char  STDataType;
//��̬ջ(���飩���ɶ�̬���ݣ�
typedef struct Stack{

	STDataType *a;
	int top;
	int capacity;
	

}Stack;


void StackInit(Stack *pst);
void StackPush(Stack *pst,STDataType x);
void StackPop(Stack *pst);
STDataType StackTop(Stack *pst);
int EmptyStack(Stack *pst);
STDataType StackSize(Stack *pst);
void StackDestroy(Stack *pst);


