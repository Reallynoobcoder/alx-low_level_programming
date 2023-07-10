#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - copies a string into a new buffer
* @str: the string to copy
* Return: pointer to a new buffer
*/

char *_strdup(char *str)
{
	unsigned int i;
	char *dest;

	dest = malloc(sizeof(char) * (strlen(str) + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];

	dest[i] = '\0';
	return (dest);
}
