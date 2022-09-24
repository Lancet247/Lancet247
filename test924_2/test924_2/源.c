#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//c


//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("未成年");
//	else if (age >= 18 && age < 28)//注意条件需要分开列写
//		printf("青年");
//	else if (age >= 28 && age < 50)
//		printf("壮年");
//	else if (age >= 50)
//		printf("老年");
//	else
//		printf("未出生");
	//if (age < 18)
	//	printf("未成年");
	//else
	//	printf("成年");
	//if (age < 18)
	//	printf("未成年");
//	return 0;
//}

//练习1：输出1-100的全部奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

int main()//switch结构
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;//最后一个break尽量不省略
	default://default顺序没有要求
		printf("输入错误\n");//处理非法状态
		break;
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	}
	return 0;
}