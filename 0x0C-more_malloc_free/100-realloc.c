#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block uisng malloc and free
 * @ptr: pointer to previous allocated memory @old_size
 * @old_size: size,in bytes,of the allocated space for ptr
 * @new_size:new size,in bytes of the new memory block
 *
 * Return: if new_size > old_size,memory should not be initialized
 * if new_size == old_size. Return ptr
 * if ptr is null then ptr= malloc(new_size)
 * if new_size = 0 and ptr is not NULL then free(ptr). Return null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
