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
		printf("Underweight");
	}
	else if (18.5 <= BMI <= 24.9)
	{
		printf("Normal");
	}
	else if (25.0 <= BMI <= 29.9)
	{
		printf("Overweight");
	}
	else if (30.0<= BMI <= 34.9)
	{
		printf("Obese");
	}
	else if (BMI >= 35.0)
	{
		printf("Extremly Obese");
	}
	return 0;
}
