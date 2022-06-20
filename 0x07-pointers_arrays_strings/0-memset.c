#include "main.h"
/**
*_memset - check the code
*@s: pointer to memory
*@b: variable constant
*@n: variable number
*Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
s[x] = b;
x++;
}

return (s);
}
