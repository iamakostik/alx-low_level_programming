#include "main.h"
/**
* _strncat - check the code
* @dest: desc pointer variable
* @src: src pointer variable
* @n: n integer variable
* Return: desc
*/
char *_strncat(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (dest[x] != '\0')
x++;
while (src[y] != '\0' && n > y)
{
dest[x] = src[y];
y++;
x++;
}
if (n > 0)
{
dest[x] = '\0';
}
return (dest);
}
