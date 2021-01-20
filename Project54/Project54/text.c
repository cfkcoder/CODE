#include <stdio.h>
#pragma warning(disable:4996)

//
//int BinarySearch(int *arr, int n, int x)
//{
//	int left = 0;
//	int right = n;
//
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//
//		if (x > arr[mid])
//		{
//			left = mid + 1;
//
//		}
//		else if (x < arr[mid])
//
//		{
//			right = mid-1;
//			
//
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//
//	return -1;
//}
//
//int main()
//{
//
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//
//	/*for (int i = 0; i < n; i++)
//	{
//		printf("%d", BinarySearch(arr, n, arr[i]));
//	}
//	*/
//
//	for (int i = 0; i <=n; i++)
//	{
//
//
//		printf("%d\n", BinarySearch(arr, n, arr[i]));
//
//	}
//	
//	
//
//
//
//
//
//
//	return 0;
//}



void fun(int a)
{
	if (a > 9)
	{

		fun(a / 10);
		

		
	}
	printf("%d ", a % 10);
	

	/*else
	  {

		   return;
	   }
	*/

}

int main()
{
	int a = 1234;
	fun(a);

	return 0;
}

