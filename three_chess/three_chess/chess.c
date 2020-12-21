#include "chess.h"
#define BLACK_PIECE 'X'
#define WHITE_PIECE 'O'


void InitBoard(char board[][COL], int row, int col)
{

	int i = 0;
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void ShowBoard(char board[][COL], int row, int col)
{
	printf("   | 1 | 2 | 3 |\n");
	int i = 0;
	for (; i < row; i++)
	{
		printf("----------------\n");
		printf(" %d | %c | %c | %c |\n", i+1, board[i][0], board[i][1], board[i][2]);
	}
	printf("----------------\n");


}

int PlayerMove(char board[][COL], int row, int col)
{

	int x = 0;
	int y = 0;
	printf("��������Ҫ�µ�λ�ã�<x, y>#");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= row&&y >= 1 && y <= col)
	{
		if (board[x - 1][y - 1] != ' ')
		{
			return 2;
		}
		board[x - 1][y - 1] = BLACK_PIECE;
		return 0;
	}
	else
	{
		return 1;
	}


}

void ComputerMove(char board[][COL], int row, int col)
{

	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = WHITE_PIECE;
			break;
		}


	}
	
	printf("Computer...Done! \n");
	Sleep(1000);
		
}

char JudgeResult(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	char flag ;
	
	for (; i < row; i++)
	{
		if (board[0][i] != ' '&& board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			flag = board[0][i];
			return flag;
		}
	}
	for (i = 0; i < col; i++)
	{

		if (board[i][0] != ' '&& board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			flag = board[i][0];
			return flag;
		}
	}

		if (board[0][0]!=' '&& board[0][0] == board[1][1] && board[1][1] == board[2][2])
		{
			return board[0][0];
		}
		if (board[0][2]!=' '&& board[0][2] == board[1][1] && board[1][1] == board[2][0])
		{
			return board[2][0];
		}
		else 
		{		
				for (i=0; i < row; i++)
				{
					j = 0;
					for (; j < col; j++)
					{
						if (board[i][j] == ' ')
						{
							return 'N';
						}
					}
				}

			}
			return 'E';
		
	}


void Game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);

	//ShowBoard(board, ROW, COL);

	char result = 'N';
	srand ((unsigned long)time(NULL));
	while (1)
	{
		ShowBoard(board, ROW, COL);
		int type = PlayerMove(board, ROW, COL);
		if (type == 1)
		{
			printf("���������������������룡\n");
			continue;
		}
		if (type == 2)
		{
			printf("��������λ���ѱ�ռ�ã����������룡\n");
			continue;
		}
		else
		{
			printf("Player...Done! \n");
			//ShowBoard(board, ROW, COL);
			
		}
		
		 result=JudgeResult(board, ROW, COL);
		if (result != 'N')
		{
			break;
		}
		
		
			
			ComputerMove(board, ROW, COL);
			//ShowBoard(board, ROW, COL);
			JudgeResult(board, ROW, COL);

			 result = JudgeResult(board, ROW, COL);
			if (result != 'N')
			{
				break;
			}
		
	}

	ShowBoard(board, ROW, COL);

	switch (result)
	{
	case BLACK_PIECE:
		printf("��ϲ��Ӯ�ˣ� \n");
		break;
	case WHITE_PIECE:
		printf("sorry,�����ˣ� \n");
		break;
	case 'E':
		printf("ƽ��! \n");
		break;
	default:
		
		//bug!!
		break;

	}

}