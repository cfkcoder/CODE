#include <stdio.h>
#pragma warning(disable:4996)


int main()
{

	int a = 0;
	int i = 1;
	int j = 1;

	for (int i = 2; i <=1000; i++)
	{
		for (j = 2; j <=(i/2); j++)
		{


			if (i%j == 0)
			{

				break;

			}

		}

		if (j >(i/2))
		{

			printf("%d������\n",i);

		}

	}


	return 0;
}

//
//int main()
//{
//	int i = 0;//
//	int count = 0;
//
//
//	for (i = 2; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1
//		int j = 0;
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if (j>i / 2)
//		{
//			count++;
//			printf("%d \n", i);
//		}
//	}
//
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
