#include "main.h"
/**
 * times_table - check the code
 */
void times_table(void)
{

int x, y, z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (y == 0)
{
_putchar('0' + z);
}
else if (z < 10)
{
_putchar(' ');
_putchar('0' + z);
}
else
{
_putchar('0' + z / 10);
_putchar('0' + z % 10);
}
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
