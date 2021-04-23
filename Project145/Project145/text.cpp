#include <iostream>
#include <cmath>
using namespace std;
//
//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < 100; ++i)
//	{
//		for ( j = 2; j<=sqrt(i); ++j)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			
//		}
//
//		if (j>sqrt(i))
//		{
//			printf("%d\n", i);
//		}
//		
//
//	}
//
//
//
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 2; i < 100; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("666");
			printf("%d\n", i);
		}
	}

	return 0;
}