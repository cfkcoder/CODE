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
	//assert��nums��;
	if (numsSize< 2)//��������Ԫ�ظ�������2ʱ������Ԫ�ظ���
	{
		return numsSize;
	}

	int dst = 0, src = 1;
	while (src < numsSize)
	{
		//�Ƚ�num[dst],num[src]����Ԫ���Ƿ���ȣ�����ȣ�dst++����nums[src]��ֵ��ֵ��nums[dst]��֮��src++�����½���һ��ѭ���ж�
		//����ȣ���src++�����½���һ��ѭ���ж�

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