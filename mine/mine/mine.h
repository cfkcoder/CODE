#ifndef _MINE_H_
#define _MINE_H_

#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)

#define ROW 12
#define COL 12
#define NUM 20


void Game();
void InitBoard(char board[][COL], int row, int col, char elem);
void ShowBoard(char board[][COL], int row, int col);
int GetMine(char mine[][COL], int x, int y);
void SetMine(char mine[][COL], int row, int col);
//void InitBoard(char board[ROW][COL],int row,int col,char)




#endif