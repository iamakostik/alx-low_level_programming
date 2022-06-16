#include "main.h"
/**
* cap_string - check the code
* @s: variable pointer
* Return: s
*/
char *cap_string(char *s)
{
int i = 1, j, x;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
if (s[0] > 96 && s[0] < 123)
{
s[0] -= 32;
}
while (s[i] != '\0')
{
if (s[i] > 96 && s[i] < 123)
{
j = 0;
x = 0;
while (x == 0 && j < 13)
{
if (s[i - 1] == a[j])
{
x = 1;
}
j++;
}
if (x == 1)
{
s[i] -= 32;
}
}
i++;
}
return (s);
}
