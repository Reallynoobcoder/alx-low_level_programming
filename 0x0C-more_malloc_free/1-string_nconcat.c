#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	len = strlen(s1) + (strlen(s2) > n ? n : strlen(s2)) + 1;
	ptr = malloc(sizeof(char) * len);

	strncpy(ptr, s1, len);
	strncat(ptr, s2, n);

	ptr[len - 1] = '\0';

	return (ptr);
}
