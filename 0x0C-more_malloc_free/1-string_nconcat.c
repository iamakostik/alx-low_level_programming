#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: pointer variable
 * @s2: pointer
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, x;
	int sign = n;
	char *ptr;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;

	if (sign >= k)
	{
		sign = k;
		ptr = malloc(sizeof(char) * (j + k + 1));
	}
	else
		ptr = malloc(sizeof(char) * (j + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		ptr[i] = s1[i];
	}
	for (x = 0; x < sign; x++)
	{
		ptr[i++] = s2[x];
	}
	ptr[i++] = '\0';
	return (ptr);
}

