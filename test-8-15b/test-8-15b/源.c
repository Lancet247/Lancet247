#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct book
{
	char name[20];//���
	short price;//55
};

int main()
{
	struct book b1 = { "�������",55 };
	struct book* pb = &b1;
	//printf("%s\n", (*pb).name);//*Ϊָ����
	//printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);//*Ϊָ����
	printf("%d\n", pb->price);

	/*printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	b1.price = 50;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
	return 0;
}