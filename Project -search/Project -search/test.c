#include <stdio.h>
#pragma warning(disable:4996)




//第一个正确版本
//int search(int* nums, int numsLen, int target) {
//
//	int left = 0;
//	int right = numsLen;
//
//	while (left<right)
//	{
//		int mid = (left + right) / 2;
//		if (target>nums[mid])
//		{
//			left = mid;
//			left++;
//			
//		}
//		if (target<nums[mid])
//		{
//			right = mid; 
//			
//			
//			
//			
//
//		}
//		if (target == nums[mid])
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//
//}



//第二个正确版本
int search(int* nums, int numsLen, int target) {

	int left = 0;
	int right = numsLen-1;//注意

	while (left<=right) //注意
	{
		int mid = (left + right) / 2;
		if (target>nums[mid])
		{
			left = mid;
			left++;

		}
		if (target<nums[mid])
		{
			right = mid;
			right--;    //注意


		}
		if (target == nums[mid])
		{
			return mid;
		}
	}

	return -1;

}





int main()
{

	int arr[] = { 1,2,3,4 };
	int k=search(arr, 4, 3);
	if (k == -1)
	{
		printf("-1");
	}
	else
	printf("%d ", k);

	return 0;
}