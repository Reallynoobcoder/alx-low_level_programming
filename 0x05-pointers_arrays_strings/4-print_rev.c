#include "main.h"
/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: Pointer to the string to be printed in reverse.
*
*/

void print_rev(char *s)
{
	int i;
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
