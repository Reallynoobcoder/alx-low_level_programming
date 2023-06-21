#include "main.h"
/**
* print_times_table - Prints the times table of the input,
*                     starting with 0.
* @num: The value of the times table to be printed.
*/
void print_times_table(int num)
{
	int ini, mini, wini;

	if (num >= 0 && num <= 15)
	{
		for (ini = 0; ini <= num; ini++)
		{
			putchar('0');

			for (mini = 1; mini <= num; mini++)
			{
				putchar(',');
				putchar(' ');

				wini = ini * mini;

				if (wini <= 99)
					putchar(' ');
				if (wini <= 9)
					putchar(' ');

				if (wini >= 100)
				{
					putchar((wini / 100) + '0');
					putchar(((wini / 10)) % 10 + '0');
				}
				else if (wini <= 99 && wini >= 10)
				{
					putchar((wini / 10) + '0');
				}
				putchar((wini % 10) + '0');
			}
			putchar('\n');
		}
	}
}
