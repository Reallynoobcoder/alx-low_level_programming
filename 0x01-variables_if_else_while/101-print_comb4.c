#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 48;

	while (a < 58)
	{
		b = a + 1;

		while (b < 58)
		{
			c = b + 1;

			while (c < 58)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if ((a != 56 || b <= 56) && !(a == 55 && b == 56 && c == 57))
				{
					putchar(44);
					putchar(32);
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
