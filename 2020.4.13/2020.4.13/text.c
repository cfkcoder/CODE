#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#pragma warning (disable: 4996)

void menu()
{
	printf("**********************************************\n");
	printf("***********          1.play                 ***********\n");
	printf("***********          0.exit                 ***********\n");
	printf("*********************************************\n");
}
void game()
{
	int ret = rand()%100+1;
	int num = 0;
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
		else if (num>ret)
		{
			printf("�´��ˣ�\n");

		}
		else
		{
			printf("��С�ˣ�");
		}
	}
	//system("pause");

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
        case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	
	}
	while (input);
	//system("pause");
	return 0;
}