#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL, return -1
 * @text_content: content to append, if NULL, do not append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fl);
		return (-1);
	}
	wr = write(fl, text_content, strlen(text_content));

	if (wr == -1)
	{
		close(fl);
		return (-1);
	}

	close(fl);
	return (1);
}