#include <stdio.h>
#pragma warning(disable:4996)


int  main()
{

	//char a = 0xb6;
	//short b = 0xb600;
	//int c = 0xb6000000;

	//if (a == 0xb6)
	//{
	//	printf("a");
	//}

	//if (b == 0xb600)
	//{
	//	printf("b");
	//}

	//if (c == 0xb6000000)
	//{
	//	printf("c\n");
	//}


	/*char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));


	*/
	float f = 3.14;
	int num = f;  //隐式转换，会有精度丢失！
	int *p = num;



	return 0;
}