#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//c

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{//需要加大括号，不然会无限循环
//		if (i == 5)
//			continue;//此处代码未停止，而是跳转到了while语句继续执行，continue作用为停止循环后续语句直接跳转到循环开头重新执行
//		//break;//终止循环继续，直接跳出
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//control + z 识别为eof，结束循环
//	while ((ch = getchar()) != EOF)//EOF - end of file = -1
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();//接受键盘的输入的一个字符
//	//putchar(ch);//输出ch字符
//	//printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//20表示20个字符
//	printf("请输入密码：\n");
//	scanf("%s", password);//输入密码并存放在password数组
//	printf("请确认（Y/N）");
//	while (ch = getchar() != '\n')
//	{
//		;
//	}//用于读取多余的字符，直到/n出现进行到下一步
//	ret = getchar();//此处getchar读取了回车（\n），导致后续无法进行
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//使用for循环打印1-10的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//风格上更简单，初始化、判断、调整集合在同一条语句
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("hehe");
//	}
//	return 0;
//}//省略for条件导致代码死循环，尽量不要省略for条件

