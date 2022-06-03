#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
int y;
for (y = 0; y < 10; y++)
{
for (x = 0; x < 10; x++)
{
if (y != x && y < x)
{
putchar('0' + y);
putchar('0' + x);
if (x + y != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
