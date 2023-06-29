#include "main.h"

/**
*_strncat - Concatenates two strings up to a specified
*@dest: Pointer to the destination of the string.
*@src: Pointer to the source string to be concatenated.
*@n: Maximum number of characters from src to be concatenated.
*Return: Pointer to the destination string after concatenation.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[j] != 0 && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
