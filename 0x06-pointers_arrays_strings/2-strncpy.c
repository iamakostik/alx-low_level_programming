#include "main.h"
/**
* _strncpy - check the code
* @dest: desc pointer variable
* @src: src pointer variable
* @n: n integer variable
* Return: desc
*/
char *_strncpy(char *dest, char *src, int n)
{
int x = 0, y;
while (n > y)
{
if (src[y] == '\0')
{
for (y = 0; y < n; y++)
{
dest[x] = '\0';
x++;
}
}
else
{
dest[x] = src[y];
y++;
x++;
}
}
return (dest);
}
