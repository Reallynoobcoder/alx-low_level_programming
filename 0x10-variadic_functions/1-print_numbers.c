#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int i;

	if (separator == NULL)
		exit(-1);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
