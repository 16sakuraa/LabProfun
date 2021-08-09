#include<iostream>
int main()
{
	int a, b, i = 0, min;

	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);

	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}


	for (i = min; i >= 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("Greatest common divisor = %d", i);
			break;
		}
	}
	return 0;
}