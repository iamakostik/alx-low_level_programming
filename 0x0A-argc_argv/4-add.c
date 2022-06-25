#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - check
 * @s: string
 * Return: 1 if success
 */

int _isnumber(char *s)
{
	int i, check, x;

	i = 0, x = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		x = isdigit(*(s + i));
		if (x == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}
