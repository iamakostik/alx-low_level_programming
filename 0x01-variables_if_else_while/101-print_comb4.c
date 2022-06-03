#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
int y;
int z;
for (z = 0; z < 10; z++)
{
for (y = 0; y < 10; y++)
{
for (x = 0; x < 10; x++)
{
if (x != y && y != z && z < y && y < x)
{
putchar('0' + z);
putchar('0' + y);
putchar('0' + x);
if (x + y + z != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
