#include "main.h"
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
	int len;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	if (strlen(s2) <= n)
		len = strlen(s1) + strlen(s2)  + 1;
	else
		len = strlen(s1) + n + 1;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	ptr = memcpy(dest, s1, strlen(s1));
	ptr = strncat(dest, s2, n);
	ptr[len - 1] = '\0';

	return (ptr);
}
