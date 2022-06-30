#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - check the code
 * @nmemb: var
 * @size: var
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
