#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
for (n = 'A'; n <= 'z'; n++)
{
n = tolower(n);
putchar(n,"\n");
}
return (0);
}
