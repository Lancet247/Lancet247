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
			if (j < col - 1)//��ӡһ�е�����
				printf(" |");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//��ӡһ�е�����
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
	printf("����ߣ����������꣩��");
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
				printf("���걻ռ��\n");
				break;
			}
		}
		else
		{
			printf("����Ƿ�\n");
			break;
		}
	}
}


void Commove(int row, int  col, char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
	x = rand() % row;//������ʹ���䷶Χ���ᳬ������
	y = rand() % col;
	while (1)
	{
		x = rand() % row;//������ʹ���䷶Χ���ᳬ������
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
