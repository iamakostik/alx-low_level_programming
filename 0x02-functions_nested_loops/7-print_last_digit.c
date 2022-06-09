#include "main.h"
/**
 * print_last_digit - check the code
 * @n : last digit
 * Return: Always last digit
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
last = (n % 10) * -1;
else
{
last = n % 10;
}
_putchar(last + '0');
return (last);
}
