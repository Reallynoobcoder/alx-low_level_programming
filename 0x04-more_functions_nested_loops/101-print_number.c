#include "main.h"
/**
* print_number - prints a number
* @n: Input number
*/

void print_number(int n)
{
	long int a, b, c, t, i, ex;

	b = n;
	ex = a =  1;

	if (b < 0)
	{
		b *= -1;
		_putchar('-');
	}

	for (t = b; t >= 10; a++)
	{
		t /= 10;
	}
	for (i = 1; i < a; i++)
	{
		ex *= 10;
	}
	while (ex > 1)
	{
		_putchar((b / ex) % 10 + '0');
		ex /= 10;
	}
	_putchar(b % 10 + '0');
}
