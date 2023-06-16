#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
	int alphabet;

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		--alphabet;
	}
	putchar('\n');

	return (0);
}
