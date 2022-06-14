#include "main.h"
/**
* _puts - check the code
* @str: the pointer var
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
