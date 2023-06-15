#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu\n", (unsigned long)sizeof(char));
	printf("Size of int: %lu\n", (unsigned long)sizeof(int));
	printf("Size of long int: %lu\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %lu\n", (unsigned long)sizeof(long long int));
	printf("Size of float: %lu\n", (unsigned long)sizeof(float));
	return (0);
}
