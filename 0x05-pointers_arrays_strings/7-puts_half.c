#include "main.h"
/**
* puts_half - Prints out the first half of a string.
* @str: input string to print.
*/

void puts_half(char *str)
{
	int i, l, j;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	if (l % 2 == 0)
	{
		j = l / 2;
	}
	else
	{
		j = (l + 1) / 2;
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
