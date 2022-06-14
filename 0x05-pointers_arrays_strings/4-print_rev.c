#include "main.h"
/**
* print_rev - check the code
*
* @s: the pointer var
*/
void print_rev(char *s)
{
int check;
int x;
check = 0;
while (s[check] != '\0')
{
check++;
}
for (x = check - 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
