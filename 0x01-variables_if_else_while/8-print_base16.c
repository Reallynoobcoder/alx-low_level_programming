#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
	int haxi;

	char haxi2;

	haxi = '0';

	haxi2 = 'a';

	while (haxi <= '9')
	{
		putchar(haxi);
		++haxi;
	}
	while (haxi2 < 'g')
	{
		putchar(haxi2);
		++haxi2;
	}
	putchar('\n');

	return (0);
}
