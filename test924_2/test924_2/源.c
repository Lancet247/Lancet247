#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//c


//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("δ����");
//	else if (age >= 18 && age < 28)//ע��������Ҫ�ֿ���д
//		printf("����");
//	else if (age >= 28 && age < 50)
//		printf("׳��");
//	else if (age >= 50)
//		printf("����");
//	else
//		printf("δ����");
	//if (age < 18)
	//	printf("δ����");
	//else
	//	printf("����");
	//if (age < 18)
	//	printf("δ����");
//	return 0;
//}

//��ϰ1�����1-100��ȫ������
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

int main()//switch�ṹ
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;//���һ��break������ʡ��
	default://default˳��û��Ҫ��
		printf("�������\n");//����Ƿ�״̬
		break;
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	}
	return 0;
}