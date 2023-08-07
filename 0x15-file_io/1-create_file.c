#include "main.h"
/**
 * create_file - creates a file with rw------- permissions
 * @filename: name of the file, if NULL, return -1
 * @text_content: contents of the file. If NULL, create an empty file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd, wr;

	fd = open(filename, O_WRONLY | O_CREAT, 600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}

	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);

}
