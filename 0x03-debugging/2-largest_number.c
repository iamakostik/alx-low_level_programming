#include "main.h"
/**
 * largest_number - check the code
 *
 * @a : first variable
 *
 * @b : second variable
 *
 * @c : third variable
 *
 * Return: the number
 *
 */
int largest_number(int a, int b, int c)
{int largest;
if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
