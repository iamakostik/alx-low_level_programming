#include "main.h"
/**
 * puts2 - check the code
 *
 *@str: pointer var.
 */
void puts2(char *str)
{
int check, x;
for (check = 0; str[check] != '\0'; check++)
{
}
x = check - 1;
for (x = 0; x < check; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
