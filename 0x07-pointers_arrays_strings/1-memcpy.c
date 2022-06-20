#include "main.h"
/**
*_memcpy - check the code
*@dest: dest pointer
*@src: src pointer
*@n: variable n
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
