#include <stdio.h>
#pragma warning(disable:4996)


void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{

	if (nums1Size == NULL || nums2Size == NULL)
	{

		  return;

	}

	int m1 = m - 1;
	int k = nums1Size - 1;
	int n1 = n - 1;
	while (m1>=0 && n1>=0)
	{
		if (nums1[m1] >= nums2[n1])
		{
			nums1[k--] = nums1[m1];
			m1--;

		}
		else if (nums1[m1] <= nums2[n1])
		{
			nums1[k--] = nums2[n1];
			n1--;

		}

	}

	while (n1>=0)
	{
		nums1[k--] = nums2[n1--];
	}


}
int main()
{
	int nums1[] = { 1, 2, 3, 0, 0, 0 };
	int nums1Size = sizeof(nums1) / sizeof(int);
	int m = 3;
	int nums2[] = { 2, 5, 6 };
	int nums2Size = sizeof(nums2) / sizeof(int);
	int n = 3;
	merge(nums1, nums1Size, m, nums2, nums2Size, n);

	for (int i = 0; i < nums1Size; i++)
	{
		
		printf("%d ", nums1[i]);

	}
	printf("\n");


	return 0;
}