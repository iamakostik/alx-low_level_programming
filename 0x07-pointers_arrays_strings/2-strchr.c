#include "main.h"
/**
*_strchr - check the code
*@s: pointer s
*@c: variable
*Return: s
*/
char *_strchr(char *s, char c)
{
unsigned int x;
x = 0;
while (s[x] != '\0')
{
if (s[x] == c)
{
break;
}
x++;
}
return (s[x] == c ? (s + x) : '\0');
}
