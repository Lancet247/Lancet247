#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//c


////do whileѭ��
//int main()
//{//��ӡ1-10
//	int i = 1;
//	do
//	{//��Ҫ�����ţ�����ʡ��
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

////n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int jie = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		jie = jie * i;
//	}
//	printf("%d", jie);//������������
//	return 0;
//}

//��1!+2!+...10!
int main()
{
	int i = 0;
	int n = 0;
	int jie = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		jie = 1;//�����¸�ֵjie
		for (i = 1; i <= n; i++)
		{
			jie = jie * i;
		}
		sum = sum + jie;
	}
	printf("%d", sum);
	return 0;
}