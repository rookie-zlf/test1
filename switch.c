#include<stdio.h>
int main()
{
	int day = 0;
	printf("������0~6֮�����ֵ��");
	scanf_s("%d", &day);
	switch (day)
	{
	case 0:printf("sunday\n"); break;
	case 1:printf("monday\n"); break;
	case 2:printf("tuesday\n"); break;
	case 3:printf("wednesday\n"); break;
	case 4:printf("thursday\n"); break;
	case 5:printf("firday\n"); break;
	case 6:printf("saturday\n"); break;
	default: printf("��������\n"); break;
	}
	return 0;
}