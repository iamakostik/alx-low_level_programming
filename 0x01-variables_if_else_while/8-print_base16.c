#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
for (x = '0'; x <= 'f'; x++)
{
if (x != ':' && x != ';' && x != '<' && x != '=' && x != '>' && x != '?' && x != '@')
{
x = tolower(x);
putchar(x);
putchar("\n");
}
}
return (0);
}
