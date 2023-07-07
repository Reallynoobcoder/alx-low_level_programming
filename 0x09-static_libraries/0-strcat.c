#include "main.h"
/**
*_strcat - Concatenates two strings.
*@dest: Pointer to the destination string.
*@src: Pointer to the source string to be concatenated.
*Return: Pointer to the destination string after concatenation.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
