#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - check the code
 * @ptr: pointer
 * @old_size: variable
 * @new_size: variable
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *i;

	if (new_size > old_size)
	{
		i = malloc(new_size);
		free(ptr);
		return (i);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		i = malloc(new_size);
		free(ptr);
		return (i);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
