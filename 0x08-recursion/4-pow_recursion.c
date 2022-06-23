#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: number variable
 * @y: varible
 *
 * Return: 1 for success
 * On error, -1 for error
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
