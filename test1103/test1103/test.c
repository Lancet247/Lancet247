#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c



//三子棋
void menu()
{
	printf("--------------------");
	printf("-1. play   0. exit -");
	printf("--------------------");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘函数
	InitBoard(ROW, COL, board);
	//printf("%d", board[1][1]);
	//展示棋盘
	Show(ROW, COL, board);
	while (1)
	{
		Playermove(ROW, COL, board);//玩家下棋
		Show(ROW, COL, board);
		ret = Iswin();
		if (ret != 'C')
		{
			break;
		}
		Commove(ROW, COL, board);//电脑下棋
		Show(ROW, COL, board);
		if (ret != 'C')
		{
			break;
		}//判断输赢 *玩家赢 #电脑赢 C继续 Q平局
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择(0/1)：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//进程
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入有误，请输入0/1");
			break;
		}
	} while (input);//当输入为0时，不再循环。
}



void main()
{
	test();
	return 0;
}