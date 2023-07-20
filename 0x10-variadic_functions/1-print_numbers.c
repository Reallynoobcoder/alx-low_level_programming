#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int i;

	if (separator == NULL)
		exit -1;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if(i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
