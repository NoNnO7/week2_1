#include<stdio.h>
int main()
{
	float BMI, h, w;
	printf("Enter your weight(kg): ");
	scanf_s("%f", &w);
	printf("Enter your height(m): ");
	scanf_s("%f", &h);
	BMI = w / (h * h);
	printf("BMI = %.1f \n", BMI);
	if (BMI < 18.5)
	{
		printf("���˹ѡ��ӡ���ࡳ��");
	}
	else if (18.5 <= BMI <= 24.9)
	{
		printf("����");
	}
	else if (25.0 <= BMI <= 29.9)
	{
		printf("�٧�����ҵðҹ");
	}
	else if (BMI >= 30.0)
	{
		printf("��ǹ�Թ�");
	}
	return 0;
}