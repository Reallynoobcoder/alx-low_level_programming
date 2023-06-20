#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @i: The number in question.*
* Return: Value of the last digit.
*/
int print_last_digit(int i)
{
	int last;

	if (i < 0)
	{
		i = i * -1;
	}
	last = i % 10;

	_putchar(last + '0');

	return (last);
}
