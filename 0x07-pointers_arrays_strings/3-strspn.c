#include "main.h"
/**
 * _strspn - check the code
 * @s: pointer s
 * @accept: pointer accept
 * Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x, y, len1 = 0, len = 0;
while (accept[len1] != '\0')
len1++;
for (x = 0; s[x] != '\0'; x++)
for (y = 0; y < len1; y++)
if (s[x] == accept[y])
len++, y = len1;
else
if (y == len1 - 1)
goto exit;
exit: return (len);
}
