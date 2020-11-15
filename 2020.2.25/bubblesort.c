#include<stdio.h>
#pragma warning(disable:4996)
#include<Windows.h>
#include<math.h>



int main()
{

	int arr[11] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//struct S{
//
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
//
//int main()
//{
//	struct S s={ 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 0Xff;
//
//	//printf("%d", sizeof(s));
//
//
//
//	return 0;
//}

	//void fun(int(*ss)[4], int num)
	//{
	//	int k = 0;
	//	int i = 0;
	//	int j = 0;
	//	int temp = 0;
	//	for (k = 1; k <= num; k++)
	//	{
	//		for (i = 0; i<3; i++)
	//		{
	//			temp = ss[i][0];
	//			for (j = 0; j<3; j++)
	//			{
	//				ss[i][j] = ss[i][j + 1];
	//			}
	//			ss[i][3] = temp;
	//		}
	//		
	//	}





	//}

	//int main()
	//{
	//	int s[][4] = { { 17, 25, 33, 42, }, { 53, 64, 75, 86 }, { 11, 22, 33, 44 } };
	//	int i = 0;
	//	int j = 0;
	//	for (i = 0; i<3; i++)
	//	{
	//		for (j = 0; j<4; j++)
	//		{
	//			printf("%d ", s[i][j]);
	//		}
	//		printf("\n");
	//	}

	//	printf("\n\n\n");
	//	fun(s, 1);
	//	for (i = 0; i<3; i++)
	//	{
	//		for (j = 0; j<4; j++)
	//		{
	//			printf("%d ", s[i][j]);
	//		}
	//		printf("\n");
	//	}
	//	return 0;
	//}

	/*int i = 0;
	int j = 0;
	int line = 0;
	printf("请输入行数：");
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line-i-1; j++)
		{
			printf(" ");
		}


		for (j = 0; j < 2 * i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < line - 1; i++)
	{
		for (j= 0; j<= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	/*int i = 0;
	

	
	for (i = 0; i < 99999; i++)
	{
		int count = 1;
		int sum = 0;
		int temp = i;
		while (temp / 10)
		{
			count++;
			temp = temp/ 10;
			
		}
		temp = i;
		while (temp)
		{
			sum+= pow(temp % 10, count);
			temp /= 10;

		}
		if (sum==i)
		{
			printf("%d\n", i);
		}
	}
	

	return 0;
	*/


	/*int n=20;
	int sum = 0;
	while (n)
		{
			sum += n;
			n = n / 2;
			sum += n;
			n = n / 2;
		}
		sum += 1;
	
	printf("%d\n", sum);
	*/


	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}

	return 0;
	*/


	/*int arr1[10] = { 0 };
	int arr2 [10]= { 0 };
	int i = 0;
	printf("请输入十个数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请再次输入十个数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 10; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr1[i];
	}*/



//void Inint(int arr[], int n, int set)
//{
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//
//void Print(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int set = 0;
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	Init(array, 10,set);
//	Print(array, 10);
//	Reverse(array, 10);
//	return 0;
//}

//int sort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j < n-1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//				
//
//		}
//	}
//}
//
//
//int output(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//int main()
//{
//	int array[10] = { 6,3,2,8,9,1,11,44,10,0 };
//	sort(array, 10);
//	output(array, 10);
//	return 0;
//}