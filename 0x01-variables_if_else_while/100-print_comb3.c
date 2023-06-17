#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 48;

	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if (!(a == 56) || (b <= 56))
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}

		a++;
	}
	putchar('\n');

	return (0);
}
