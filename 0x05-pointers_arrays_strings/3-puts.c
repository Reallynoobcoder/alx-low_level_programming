#include "main.h"
/**
* _puts - Prints a string to the standard output.
* @str: Pointer to the string to be printed.
*
*/

void _puts(char *str)
{
	int i;
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
