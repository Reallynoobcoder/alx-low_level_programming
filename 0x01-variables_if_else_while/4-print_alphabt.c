#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet < 123)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			++alphabet;
			continue;
		}
		putchar(alphabet);
		++alphabet;
	}
	putchar('\n');

	return (0);
}
