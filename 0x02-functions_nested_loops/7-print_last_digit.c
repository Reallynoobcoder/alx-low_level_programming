#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @i: The number in question.*
* Return: Value of the last digit.
*/
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
