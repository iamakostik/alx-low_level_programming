#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check the code
 * @size: size variable
 * @c: variable
 * Return: c pointer
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int x;
p = malloc(sizeof(char) * size);
if (size == 0 || p == NULL)
{
return (NULL);
}
for (x = 0; x < size; x++)
{
p[x] = c;
}
return (p);
}
