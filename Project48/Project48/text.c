#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//
//void Menu()
//{
//
//
//	printf("*********************************\n");
//	printf("****** 1.plat        0.exit *****\n");
//	printf("*********************************\n");
//
//}
//
//void Game()
//{
//	int x;
//	int num;
//	x = rand() % 100;
//	while (1)
//	{
//		printf("������һ����:");
//		scanf("%d", &num);
//		if (num > x)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (num < x)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ���¶��ˣ�\n");
//			return 0;
//		}
//
//	}
//
//}
//
//int main()
//{
//
//
//	srand((unsigned long)time(NULL));
//	int select;
//	while (1)
//	{
//		Menu();
//		printf("��ѡ��:");
//		scanf("%d", &select);
//		if (select == 1)
//		{
//			Game();
//		}
//		else if (select == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//			continue;
//		}
//
//	}
//	return 0;
//}

int erjz(int a)
{
	int count = 0;
	while (a)
	{
		count++;
		a &= (a - 1);

	}
	return count;
}

int main()
{


	int a;
	printf("������һ����:");
	scanf("%d", &a);
	printf("%d\n", erjz(a));




	return 0;

}