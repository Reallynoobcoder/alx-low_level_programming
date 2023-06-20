#include "main.h"
/**
* jack_bauer - Prints every minute of the day of
*              Jack Bauer, starting from 00:00 to 23:59.
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; ++h)
	{
		for (m = 0; m < 60; ++m)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			if (!(h == 98 && m == 99))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
	return (0);
}
