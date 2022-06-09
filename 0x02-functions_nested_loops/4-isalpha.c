#include "main.h"
/**
 * _isalpha - check the code
 * @c : check for c
 * Return: Always 0 or 1
 */
int _isalpha(int c)
{
int i;
int n;
for (i = 'a'; i <= 'z'; i++)
{
for (n = 'A'; n <= 'Z'; n++)
{
if (c == i || c == n)
{
return (1);
}
}
}
return (0);
}
