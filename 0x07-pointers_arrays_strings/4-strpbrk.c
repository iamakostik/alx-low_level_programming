#include "main.h"
/**
 * _strpbrk - check the code
 * @s: pointer s
 * @accept: pointer accept
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int x, y;
for (x = 0; s[x] != '\0'; x++)
for (y = 0; accept[y] != '\0'; y++)
if (s[x] == accept[y])
goto exit;
exit: return (s[x] != '\0' ? s + x : '\0');
}
