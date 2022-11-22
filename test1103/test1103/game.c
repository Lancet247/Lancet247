#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


void InitBoard(int row, int  col, char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++);
	{
		for (j = 0; j < col; j++);
		{
			board[i][j] = '    ';
		}
	}
}


void Show(int row, int  col, char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//打印一行的数据
				printf(" |");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//打印一行的数据
					printf("|");
			}
			printf("\n");

		}
	}
}

void Playermove(int row, int  col, char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("玩家走（请输入坐标）：");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != '*' && board[x][y] != '#')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用\n");
				break;
			}
		}
		else
		{
			printf("坐标非法\n");
			break;
		}
	}
}


void Commove(int row, int  col, char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	x = rand() % row;//求余数使得其范围不会超出棋盘
	y = rand() % col;
	while (1)
	{
		x = rand() % row;//求余数使得其范围不会超出棋盘
		y = rand() % col;
		if (board[x][y] != '*' && board[x][y] != '#')
		{
			board[x][y] = '#';
			break;
		}
	}
}


char Iswin(int row, int  col, char board[ROW][COL])
{

}
