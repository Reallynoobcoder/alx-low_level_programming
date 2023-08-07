#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: name of the file to read
 * @letters: number of characters to print
 * Return: 0 on success
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buffer;
	ssize_t ra, wr;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fl);
		return (0);
	}
	ra = read(fl, buffer, letters);

	if (ra == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, ra);

	if (wr == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}
	free(buffer);
	close(fl);
	return (ra);
}
