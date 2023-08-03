#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, i = 0; (tmp >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
