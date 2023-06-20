#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		putchar('0');
	}
	for (m = 1; m <= 9; m++)
	{
		putchar(',');
		putchar(' ');
		p = n * m;
		if (p < 10)
		{
			putchar(' ');
		}
		else
		{
			putchar((p / 10) + '0');
		}
		putchar((p % 10) + '0');
	}
	putchar('\n');
}
