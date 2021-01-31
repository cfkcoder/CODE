#include <stdio.h>
#pragma warning(disable:4996)


void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
	assert(nums1&&nums2);
	int n1 = n - 1;
	int m1 = m - 1;
	int size = nums1Size - 1;
	while (n1 >= 0 && m1 >= 0)
	{
		if (nums2[n1] >= nums1[m1])
		{
			nums1[size--] = nums2[n1];
			n1--;
		}
		else if (nums1[m1] >= nums2[n1])
		{
		
			nums1[size--] = nums1[m1];
			m1--;
		}
	}

	
		while (n1 >= 0)
		{
			nums1[size--] = nums2[n1--];
		}
		
	

}


int main()
{
	int a[] = { 1, 2, 3, 0, 0, 0 };
	int nums1Size = sizeof(a) / sizeof(int);

	int b[] = { 2, 5, 6 };
	int nums2Size = sizeof(a) / sizeof(int);

	merge(a, nums1Size, 3, b, nums2Size, 3);

	for (int k = 0; k < nums1Size; k++)
	{
		printf("%d ", a[k]);
	}


	return 0;
}

