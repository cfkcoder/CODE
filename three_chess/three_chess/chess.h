#ifndef _CHESS_H_
#define _CHESS_H_
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)


#define ROW 3
#define COL 3

void Game();
void InitBoard(char board[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
int PlayerMove(char board[][COL], int row, int col);
void  ComputerMove(char board[][COL], int row, int col);
char JudgeResult(char board[][COL], int row, int col);








#endif 