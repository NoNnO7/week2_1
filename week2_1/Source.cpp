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
		printf("น้ำหนักต่ำกว่าเกณฑ์");
	}
	else if (18.5 <= BMI <= 24.9)
	{
		printf("ปกติ");
	}
	else if (25.0 <= BMI <= 29.9)
	{
		printf("สูงกว่ามาตรฐาน");
	}
	else if (BMI >= 30.0)
	{
		printf("อ้วนเกินไป");
	}
	return 0;
}