#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: variable
 *
 * Return: check
 */

int _strlen(char *s)
{
int check;
check = 0;
while (*s != '\0')
{
check++;
s++;
}
return (check);
}
