#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c

//int main()
//{
//again:
//	printf("huanyin ");//goto�÷������ܻ�����߼�˳�򣬾������á���Ҫ���ڶ��Ƕ��ѭ�������˳�
//	goto again;
//	return 0;
//}

////�ػ��������
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown-s-t 60
//	//system����ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	again:
//	printf("����һ�������ڹػ��������롰ȡ������ȡ���ػ�:\n");
//	scanf("%s", input);
//	if (strcmp(input, "ȡ��"))//strcmpר���ڱȽ������ַ�������
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////��������
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//ע�ⲻҪ������ӵ�ַ����&
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}

////strcpy
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "asdkjlaksj";
//	strcpy(arr2, arr1);//�����ַ���������ǰ��ΪĿ���ַ���������仯��ע�ⲻҪ���
//	printf("%s\n", arr2);
//	return 0;
//}


////memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//��д�ַ���ǰ��λ�Ĳ���
//	printf("%s\n", arr);
//	return 0;
//}


////�Զ��庯��
//ret_type�������� fun_name������(para1, *)
//{
//	statement;//�����
//}

////��ȡ���ֵ
//int getmax(int x, int y)//�������
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
�˴�x��yΪ��ʽ�������βΣ�����������abΪʵ�ʲ�����ʵ�Σ�
��ʵ�ʲ������ݸ���ʽ����ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ�Ρ�
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int max = getmax(a, b);//ʹ�ô���
//	printf("max = %d ", max);
//	return 0;

//��������ֵ
void swit1(int x, int y)//void��ʾû�з���ֵ
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;//�˷���ֻ�滻������xy�����滻ab���޷��ﵽϣ��Ч��
}

void swit2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int* pa = &a;
	int* pb = &b;
	//*pa = 20;//������
	printf("a = %d\nb = %d\n", a, b);
	//swit1(a, b);
	swit2(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return 0;
}