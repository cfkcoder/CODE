#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//
//int main()
//{
//
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f'};
//	int len = strlen(acX);
//	int len1 = strlen(acY);
//	printf("len=%d\n", len);
//	printf("len1=%d\n", len1);
//
//
//
//
//	return 0;
//}


void Game()
{
	for (int i = 0; i < 5; i++)
	{

		int x = rand() % 10;
		printf("%d ", x);

	}
	printf("\n");
	
}



int main()
{


	srand(time(NULL));

	Game();
	return 0;
}


/*printf("\n");
for (int i = 0; i < 5; i++)
{

int x = rand() % 10;
printf("%d ", x);

}*/


/*for (int i = 0; i < 5; i++)
{

int x = rand() % 10;
printf("%d ", x);


}
printf("\n");

for (int i = 0; i < 5; i++)
{

int x = rand() % 10;
printf("%d ", x);

}
printf("\n");

*/
//srand((unsigned long)time(NULL));