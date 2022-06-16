#include "main.h"
/**
*leet - check the code
*@s: pointer variable
*Return: the encoded string.
*/

char *leet(char *s)
{
int x = 0, y = 0;
char leeter[] = {'4', '3', '1', '0', '7'};
char upper[] = {'A', 'E', 'L', 'O', 'T'};
char lower[] = {'a', 'e', 'l', 'o', 't'};
while (s[x] != '\0')
{
for (y = 0; y < 5; y++)
{
if (s[x] == lower[y] || s[x] == upper[y])
s[x] = leeter[y];
}
x++;
}
return (s);
}
