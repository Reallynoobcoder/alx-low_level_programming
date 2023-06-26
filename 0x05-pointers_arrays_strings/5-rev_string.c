#include "main.h"
/**
* rev_string - Reverses a string in place.
* @s: Pointer to the string to be reversed.
*
*/

void rev_string(char *s)
{
	int l, i, j, swap;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (i = 0; i < l / 2; i++)
	{
		j = (l - 1) - i;
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
