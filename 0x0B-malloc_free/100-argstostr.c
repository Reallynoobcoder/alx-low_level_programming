#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates the arguments to string
 * @ac: the number of arguments
 * @av: the arguments
 * Return: return the string
*/

char *argstostr(int ac, char **av)
{
	int i, tl = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		tl += strlen(av[i]) + 1;
	}

	new_str = malloc((tl + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, "");

	for (i = 0; i < ac; i++)
	{
		strcat(new_str, av[i]);
		strcat(new_str, "\n");
	}

	return (new_str);
}
