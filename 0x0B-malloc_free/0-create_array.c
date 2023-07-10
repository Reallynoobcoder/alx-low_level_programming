#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* create_array - Creates an array of characters
* @size: The size of the array
* @c: The character to fill the array with
*
* Return: Pointer to the created array, or NULL if memory allocation fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL || size == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
