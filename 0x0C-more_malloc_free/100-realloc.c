#include "main.h"
#include <string.h>
/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to the original memory block
  * @old_size: old size of memory block
  * @new_size: new size of memory block
  * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *dest;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	dest = malloc(new_size * sizeof(int));

	if (dest == NULL)
		return (NULL);

	if (old_size < new_size)
	{
		memcpy(dest, ptr, old_size);
	}
	else
	{
		memcpy(dest, ptr, new_size);
	}

	free(ptr);

	return (dest);
}
