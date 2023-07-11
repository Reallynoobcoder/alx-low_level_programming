#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * strtow - splits a string into words.
 * @str: the string to split
 * Return: the pointer to an array containing words.
 */

char **strtow(char *str)
{
	int i = 0, j = 0, word_count = 0, len, word_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	for (i = 0; i < len; i++)
		if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
			word_count++;

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (!isspace(str[i]))
		{
			while (i + word_len < len && !isspace(str[i + word_len]))
				word_len++;
			words[j] = malloc((word_len + 1) * sizeof(char));
			if (words[j] == NULL)
				for (i = 0; i < j; i++)
					free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[j], &str[i], word_len);
		words[j][word_len] = '\0';
		j++;
		i += word_len;
	}
	words[j] = NULL;
	return (words);
}
