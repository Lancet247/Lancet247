#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c



//������
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
	//��ʼ�����̺���
	InitBoard(ROW, COL, board);
	//printf("%d", board[1][1]);
	//չʾ����
	Show(ROW, COL, board);
	while (1)
	{
		Playermove(ROW, COL, board);//�������
		Show(ROW, COL, board);
		ret = Iswin();
		if (ret != 'C')
		{
			break;
		}
		Commove(ROW, COL, board);//��������
		Show(ROW, COL, board);
		if (ret != 'C')
		{
			break;
		}//�ж���Ӯ *���Ӯ #����Ӯ C���� Qƽ��
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��(0/1)��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//����
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("��������������0/1");
			break;
		}
	} while (input);//������Ϊ0ʱ������ѭ����
}



void main()
{
	test();
	return 0;
}