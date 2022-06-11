#include "main.h"
/**
 * _isupper - check the code
 *
 * @c : parameter member
 *
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
int i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
