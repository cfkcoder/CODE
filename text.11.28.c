#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)

#include<stdio.h>
int main()
	{
		int n, i, j = 0;
		int k;
		int b[50];
		int a[50];
		scanf("%d", &n);
		
		for (i = 0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}


		scanf("%d", &k);
		// a[n]=k;
		for (i = 0; i<n; i++)
		{
			if (a[i] != k)
			{
				i++;
				//b[j++]=a[i];
			}
			else{
				break;
			}

		}
		// if(i==n);


		for (j = i; j<n - 1; j++)
		{
			a[j] = a[j + 1];

		}

		for (i = 0; i<n - 1; i++)
		{
			printf("%d ", a[i]);
		}

		return 0;
	}
	/*int n, m;
	int j = 0;
	int b[50];
	int a[50];
	scanf("%d", &n);
	
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for (int i = 0; i<n; i++){
		if (a[i] != m){
			b[j++] = a[i];
		}
	}
	for (int x = 0; x<j; x++){
		printf("%d ", b[x]);
	}*/
	//     while(b[j]!='\0'){
	//         printf("%d ",b[j]);
	//         j++;
	//     }


//int main()
//{
//	int n, i, j = 0;
//	int k;
//
//	int b[50];
//	scanf("%d", &n);
//	int a[n];
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//
//	scanf("%d", &k);
//	// a[n]=k;
//	for (i = 0; i<n; i++)
//	{
//		if (a[i] != k)
//		{
//			i++;
//			//b[j++]=a[i];
//		}
//		else{
//			break;
//		}
//
//	}
//	// if(i==n);
//
//
//	for (j = i; j<n - 1; j++)
//	{
//		a[j] = a[j + 1];
//
//	}
//
//	for (i = 0; i<n - 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	char *odd_addr = (char*)malloc(5);
//	if (odd_addr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		odd_addr[i] = i;
//	}
//
//	char* temp = (char*)realloc(odd_addr, 20);
//	odd_addr = (temp != NULL ?  temp:odd_addr);
//
//	for (int i = 5; i < 20; i++)
//	{
//		odd_addr[i] = i * 2;
//	}
//	//odd_addr = (char*)realloc(odd_addr, 10);  //不行，realloc失败了呢，堆空间丢失，内存泄漏
//	//char* temp = (char*)realloc(odd_addr,10000);
//	////odd_addr = (temp != NULL ?  temp:odd_addr);
//	//if (temp== NULL)
//	//{
//	//perror("realloc");
//	//return 2;
//
//	//}
//	//odd_addr = temp;
//	/*char* new_addr = (char*)realloc(odd_addr,10000);
//	if (new_addr == NULL)
//	{
//		perror("realloc");
//		return 2;
//
//	}
//	printf("old address : %p\n", odd_addr);
//	printf("new address : %p\n", new_addr);*/
//
//
//
//
//
//
//	return 0;
//}
//
//int main()
//{
//	printf("请输入有多少个数据# ");
//	int num = 0;
//	scanf("%d", &num);
//	int *ptr = (int*)malloc(num*sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("malloc error!\n");
//		return 1;
//	}
//	printf("请输入你的数据列表#");
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d", ptr+i);
//	}
//	int sum = 0;
//	for (int i = 0; i < num; i++)
//	{
//		if (i == num - 1)
//		{
//			printf("%d", ptr[i]);
//		}
//		else
//		{
//			printf("%d+", ptr[i]);
//		}
//		
//		sum += ptr[i];
//	}
//
//
//	printf("=%d\n", sum);
//
//
//	ptr[3] = 0;
//	free(ptr);//如果没有内存释放，就会造成内存泄露
//	ptr[3] = 0;
//
//	system("pause");
//	return 0;
//}