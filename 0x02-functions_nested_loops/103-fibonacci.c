#include <stdio.h>

/**
 * main - prints the add of the even-valued terms of the Fibonacci sequence
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by commas, followed by a space ,
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1, num2 = 2, num3 = 0, sum = 2;

	while (num3 <= 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num3 % 2 == 0)
			sum += num3;
	}
	printf("%ld\n", sum);
	return (0);
}
