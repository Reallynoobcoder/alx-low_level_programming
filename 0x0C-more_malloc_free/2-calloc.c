#include <main.h>
#include <string.h>
/**
 * _calloc - allocates memory for an initialized buffer
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 * Return: return pointer to initialized buffer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if(nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc (nmemb * size);

	if(ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
