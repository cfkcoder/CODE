#include <stdio.h>
#include <assert.h>
#pragma warning(disable:4996)




void reserve(int *arr,int left,int right)
{
	/*int left = 0;
	int right = arr + strlen(arr) - 1;*/
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}




}
void rotate(int *nums, int numsSize, int k)
{
	assert(nums);
	/*while (k)
	{
		int tmp = nums[numsSize - 1];
		for (int i = numsSize - 1; i>=0; --i)
		{
			nums[i] = nums[i - 1];
		}
		nums[0] = tmp;
		k--;
	}*/
	
	reserve(nums, 0, numsSize - k-1);
	reserve(nums, numsSize - k, numsSize - 1);
	reserve(nums, 0, numsSize - 1);
}
 void fun()
{
	 return;
}

int main()
{

	int a[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(a) / sizeof(int);
	
	fun();
	rotate(a, n, 2);
	for (int k = 0; k < n; k++)
	{
		printf("%d ", a[k]);
	}


	return 0;
}