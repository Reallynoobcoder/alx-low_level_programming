#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer for result
* @size_r: buffer size
* Return: address of r or 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, swap;
	int m = 0, n;

	for (i = 0; n1[i] != 0; i++)
		;
	for (j = 0; n2[j] != 0; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	for (i = i - 1, j = j - 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
		{
			n = n + (n1[i] - '0');
		}
		if (j >= 0)
		{
			n = n + (n2[j] - '0');
		}
		if (i < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';

	if (i >= 0 || j >= 0 || m != 0)
	{
		return (0);
	}
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		swap = r[k];
		r[k] = r[l];
		r[l] = swap;
	}
	return (r);
}
