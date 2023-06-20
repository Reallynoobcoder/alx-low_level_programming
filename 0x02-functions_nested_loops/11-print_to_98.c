#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Prints all natural numbers from input to 98,
*               in order separated by a comma followed by a space.
*@num: The number to begin counting at.
*/
void print_to_98(int num)
{
	int a;

	if (num < 98)
	{
		for (a = num; a <= 98; ++a)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else if (num > 98)
	{
		for (a = num; a >= 98; --a)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else
		printf("%d", num);
	printf("\n");
}
