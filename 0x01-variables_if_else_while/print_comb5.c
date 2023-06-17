#include <stdio.h>
/**
 * main - Prints all possible combinations of four different digits,
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c, d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;

	while (a < 58)
	{
		b = 48;
	while (b < 58){	c = 48;

	while (c < 58)
	{

	d = 48;
	while (d < 58)
	{

	if (!(a == 48 && b == 48 && c == 48 && d == 48))
	{
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
	if (!(a == 57 && b == 56 && c == 57 && d == 57))

	{
		putchar(',');
		putchar(' ');
	}

	if (a == 57 && b == 56 && c == 57 && d == 57)

	{
		return (0);
	}

	}

		d++;
	}

		c++;
	}

		b++;
	}

		a++;
}

	putchar('\n');

	return (0);
}
