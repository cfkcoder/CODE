



#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)


void merge(int arr[], int L, int M, int R)
{
	int LEFT_SIZE = M - L;
	int RIGHT_SIZE = R - M + 1;
	int left[10];
	int right[10];
	int i, j, k;

	for (i = L; i < M; i++)
	{
		left[i - L] = arr[i];

	}
	for (i = M; i < R; i++)
	{

		right[i - M] = arr[M];
	}
	i = 0; j = 0; k = L;
	while (i < LEFT_SIZE&&j < RIGHT_SIZE)
	{

		if (left[i] < right[i])
		{
			arr[k] = left[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = right[i];
			j++;
			k++;
		}

	}
	while (i < LEFT_SIZE)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < RIGHT_SIZE)
	{
		arr[k] = right[i];
		j++;
		k++;
	}








}

int main()
{
	int arr[] = { 2, 8, 9, 10, 4, 5, 6, 7 };
	int L = 0;
	int M = 4;
	int R = 7;
	merge(arr, L, M, R);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}






	return 0;
}
//void quicksort(int arr[], int left, int right)
//{
//
//	if (arr == NULL)
//	{
//		return;
//	}
//	if (left>right)
//	{
//		return;
//	}
//	int key = arr[left];
//	int l = left;
//	int r = right;
//	while (l != r)
//	{
//		while (arr[r] >= key&&l < r)
//		{
//
//			r--;
//		}
//		while (arr[l] <= key&&l<r)
//		{
//			l++;
//		}
//		if (l<r)
//		{
//
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//
//		}
//
//	}
//	arr[left] = arr[l];
//	arr[l] = key;
//	quicksort(arr, left, l - 1);
//	quicksort(arr, l + 1, right);
//
//}
//
//int main()
//{
//
//	int arr[8] = { 3, 6, 7, 2, 4, 9, 1, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int key = arr[left];
//	int right = len - 1;
//	int l = left;
//	int r = len - 1;
//	quicksort(arr, l, r);
//	int i = 0;
//	for (i = 0; i<8; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//
//
//}
















//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//	} while (input);
//
//	
//		//int i = 0;
//		////控制行数
//		//for (i = 1; i <= 9; i++)
//		//{
//		//	//打印每一行内容，每行有i个表达式
//		//	int j = 0;
//		//	for (j = 1; j <= i; j++)
//		//	{
//		//		printf("%d*%d=%2d ", i, j, i*j);
//		//	}
//		//	printf("\n");
//		//}
//	
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//}