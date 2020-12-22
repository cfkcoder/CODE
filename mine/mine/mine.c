#include "mine.h"

void InitBoard(char board[][COL], int row, int col, char elem)
{
	int i,j;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j < col ; j++)
		{
			board[i][j] = elem;
		}
	}
}


char GetNum(char mine[][COL], int x, int y)
{
	 return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]+ \
		mine[x][y - 1] + mine[x][y + 1]+\
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]-7*'0';

}
void SetMine(char mine[][COL], int row, int col)
{
	int n = NUM;

	while (n)
	{
		int x = rand() % (ROW - 2) + 1;
		int y = rand() % (COL - 2) + 1;
		if (mine[x][y] == '1')
			continue;
		
		
			mine[x][y] = '1';
		
		n--;
	}
	
	
}

void ShowBoard(char board[][COL], int row, int col)
{
	int i, j;
	printf("   ");
	for (i = 1; i <= ROW - 2; i++)
	{
		printf(" %-2d|", i);
	}
	printf("\n");
	for (j = 1; j <= ROW - 2; j++)
	{
		printf("----");
	}
	printf("---\n");

	for (i = 1; i <=ROW - 2; i++)
	{
		printf("%2d|", i);
		for (j = 1; j <= COL - 2; j++)
		{
			printf(" %-2c|", board[i][j]);
		}
		printf("\n");
		for (j = 1; j <= ROW - 2; j++)
		{
			printf("----");
		}
		printf("---\n");
	}


}
void Game()
{

	srand((unsigned long)time(NULL));

    char board[ROW][COL];
	char mine[ROW][COL];

	InitBoard(board,ROW, COL, '*');
	InitBoard(mine,ROW, COL, '0');
	SetMine(mine, ROW, COL);
	int count = (ROW - 2)*(COL - 2) - NUM;
	
	do
	{	
		system("cls");
		int x = 0;
		int y = 0;
		ShowBoard(board, ROW, COL);
		printf("��������Ҫɨ��λ�ã�>");
		scanf("%d %d",&x, &y);
		if (x<1 || x>10 || y<1 || y>10)
		{
			printf("����λ�ô�������������... \n");
			Sleep(2000);
			continue;
		}
		 if (board[x][y]!='*')
		{
			printf("��λ���ѱ�ɨ��������������... \n");
			Sleep(2000);
			continue;

		}
		 if (mine[x][y] == '0')
		{
			count--;
			board[x][y] = GetNum(mine, x, y);
			
		}
		else {
			
			printf("�������λ�ã�%d,%d)���ף�\n", x, y);
			break;
			

		}
		
		
	} while (count);


	if (count == 0)
	{
		printf("��ϲ��ɨ�׳ɹ��� \n");
	}
	else
	{
		printf("ɨ�׽������㱻ը���ˣ� \n");
		ShowBoard(mine, ROW, COL);
	}


	
}