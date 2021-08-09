#include<iostream>
int main()
{
	int num, i = 2;

	printf("Enter Number : ");
	scanf_s("%d", &num);
	printf("Factoring Result : ");

	while (num != 1)
	{
		if ((num % i) == 0)
		{
			num /= i;
			printf("%d", i);
			if (num != 1)
			{
				printf(" x ");
			}
		}
		else
		{
			i++;
		}
	}
	return 0;
}