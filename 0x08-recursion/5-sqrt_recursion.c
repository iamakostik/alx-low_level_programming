#include "main.h"

/**
 * sqrt_ - check
 * @x: var name
 * @y: var
 *
 * Return: 0
 */

int sqrt_(int x, int y)
{
if (y * y == x)
return (y);
else if (y * y > x)
return (-1);
return (sqrt_(x, y + 1));
}


/**
 * _sqrt_recursion - check
 * @n: Integer
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
return (sqrt_(n, 1));
}

