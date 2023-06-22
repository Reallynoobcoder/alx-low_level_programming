#include "main.h"
/**
* print_triangle - Prints a triangle of '#' characters.
* @size: The size of the triangle.
*         If size is 0 or less, only a new line is printed.
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i >= 1; --i)
		{
			for (j = 1; j < i; ++j)
			{
				_putchar(' ');
			}
			for (j = size; j >= i; --j)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
