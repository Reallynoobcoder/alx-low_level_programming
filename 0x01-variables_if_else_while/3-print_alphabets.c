#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter < 123)
	{
		putchar(letter);
		++letter;
	}
	while (upper < 91)
	{
		putchar(upper);
		++upper;
	}
	putchar('\n');
	return (0);
}
