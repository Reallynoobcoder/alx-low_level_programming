#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}

			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		}
		return (0);
}
