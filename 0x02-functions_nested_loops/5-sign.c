#include "main.h"
/**
 * print_sign - check the code
 * @n - check for n
 * Return: Always 0 or 1 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}
else if (n == 0)
{
_putchar('0');
return(0); 
}
_putchar('-');
return(-1);
}
