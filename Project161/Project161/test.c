#include <stdio.h>
#include <assert.h>
#pragma warning(disable:4996)


//
//void fun(int *a, int *b)
//{
//	int c = 22;
//	a = &c;
//
//}

//
//void fun(int *arr, int n)
//{
//
//	int a = 10;
//	arr = &a;
//
//
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	////int *p = &a;
//	//fun(&a, &b);
//	
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int b = 10;
//
//	fun(arr, sizeof(arr) / sizeof(arr[0]));
//
//
//
//
//	return 0;
//}


typedef struct ListNode
{
	int data;
	struct ListNode *next;


}ListNode;

void ListNodeInit(ListNode* phead)
{


	assert(phead);
	phead = NULL;

}


int main()
{

	ListNode list;
	ListNodeInit(&list);

	return 0;
}