#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 33 };
//	int i = 0;
//	int j = 0;
//	int max = array[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < array[i])
//		{
//			max = array[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//
//}





//int i = 0;
//double result = 0.0;
//int k = 1;
//for (i = 1; i <= 100; i++)
//{
//	result += (1.0 / i)*k;
//	k *= -1;
//}
//printf("%lf\n", result);
//system("pause");
//return 0;
int main()
{
int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 10 == 9) || (i / 10 == 9))
			count++;
	}
	printf("%d\n", count);
	system("pause");
}










/*int Mul(int n)
{
	int result = 1;
	int k = 0;
	for (k=n; k ; k--)
	{
	if (k == 1)
	{
		printf("%d", k);
}
	else
	{
		printf("%d*", k);
		}
	
	result *= k;
	
	}
	return result;

}
int main()
{
	int i = 1;
	for (; i<=10 ; i++)
	{
	printf("=%d\n", Mul(i));
	
	}
	system("pause");
	return 0;
}*/






/*int Mul(int _n)
{
	printf("%d!:", _n);
	int result = 1;
	for (; _n > 0; _n--){
		if (_n == 1){
			printf("%d", _n);
		}
		else{
			printf("%d*", _n);
		}
		result *= _n; //5*4*3*2*1
	}
	printf("=%d\n", result);
	return result;*/















