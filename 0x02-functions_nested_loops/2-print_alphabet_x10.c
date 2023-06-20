#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	char i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}

