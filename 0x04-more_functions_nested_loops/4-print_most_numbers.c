#include "main.h"
/**
* print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4
*/

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n == 2 || n == 4)
		{
			n++;
			continue;
		}
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
