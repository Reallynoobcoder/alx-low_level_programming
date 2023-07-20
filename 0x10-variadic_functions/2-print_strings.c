#include "variadic_functions.h"
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	va_start(arg, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arg, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(arg);
}
