#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int num3;

	printf("%ld, %ld, ", num1, num2);
	for (i = 0; i < 48; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (i == 47)
			printf("%ld\n", num3);
		else
			printf("%ld, ", num3);
	}
	return (0);
}
