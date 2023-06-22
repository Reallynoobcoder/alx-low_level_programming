#include "main.h"
/**
* print_numbers - Print numbers from 0 to 9
*/

void print_numbers(void)
{
	int n;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
