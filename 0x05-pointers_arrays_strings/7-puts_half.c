#include "main.h"
/**
 * puts_half - check the code
 * @str : variable pointer
 */
void puts_half(char *str)
{
int check, x, y;
for (check = 0; str[check] != '\0'; check++)
{
}
x = (check - 1) / 2;
for (y = x + 1; y < check; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
