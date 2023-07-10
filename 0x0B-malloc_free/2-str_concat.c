#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
* _strlen - Calculates the length of a string.
* @s: Pointer to the input string.
*
* Return: The length of the string.
*/

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	return (l);
}

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);

	str = (char *) malloc((i + j + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	_strcat(str, s1);
	_strcat(str, s2);
}
