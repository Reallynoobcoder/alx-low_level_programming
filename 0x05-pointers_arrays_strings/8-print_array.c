#include <stdio.h>
/**
* print_array - Prints the elements of an integer array.
* @a: Pointer to the integer array.
* @n: Number of elements in the array.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
		{
			printf(", ");
		}
	}
	printf("\n");
}
