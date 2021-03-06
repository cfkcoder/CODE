#include <stdio.h>
#pragma warning(disable:4996)



//
//int RemoveDuplicate(int *arr, int n)
//{
//
//	int p = 0;
//	int q = 1;
//	while (q < n)
//	{
//		if (arr[p] != arr[q])
//		{
//			p++;
//			arr[p] = arr[q];
//			q++;
//		}
//		else
//		{
//			q++;
//		}
//	}
//	return p;
//
//
//
//}


int removeDuplicates(int *nums, int numsSize)
{
	//assert（nums）;
	if (numsSize< 2)//当数组中元素个数少于2时，返回元素个数
	{
		return numsSize;
	}

	int dst = 0, src = 1;
	while (src < numsSize)
	{
		//比较num[dst],num[src]两个元素是否相等，不相等，dst++，将nums[src]的值赋值给nums[dst]，之后src++，重新进行一次循环判断
		//若相等，则src++；重新进行一次循环判断

		if (nums[dst] != nums[src])
		{
			dst++;
			nums[dst] = nums[src];
			src++;

		}
		else
		{
			src++;
		}
	}
	return dst + 1;
}

int main()
{

	int arr[] = { 1, 2, 3, 4, 4, 4, 4, 5, 5, 5, 4, 4, 4, 4, 7, 8 };
	int n = sizeof(arr) / sizeof(int);
	int n1 = removeDuplicates(arr, n);

	for (int i = 0; i < n1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;

}