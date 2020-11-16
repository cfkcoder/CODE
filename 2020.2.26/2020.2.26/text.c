#include<stdio.h.>
#pragma warning(disable:4996)

int main()

{

	int a = 0;

	int b = 0;

	int t = 0;

	printf("请输入两个数:");

	scanf("%d %d", &a, &b);
	while (a != b)

	{

		if (a<b)

		{
			t = a;

			a = b;

			b = t;

		}

		else

{
			a = a - b;
			b = a - b;
			t = a;
		
}
		
}
printf("两个数的最大公约数是%d\n", t);

	system("pause");

	return 0;

}












//int swap(int* m,int* n)
//{
//	*m = *m^*n;
//	*n = *m^*n;
//	*m^=*n;
//	
//	
//}
//
//
//int main()
//{
//	int m = 17;
//	int n = 13;
//    swap(&m,&n);
//	printf("%d %d\n", m,n);
//return 0;
//}
//
//
