#include "main.h"
/**
* swap_int - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* This function swaps the values of two integers by using pointers.
* The original values of the integers are modified in the process.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	a = *b;

	b = c;
}
