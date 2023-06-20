#include "main.h"
/**
*print - alphabet using _putchar
*Return: 0
*/
void print_alphabet()
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
