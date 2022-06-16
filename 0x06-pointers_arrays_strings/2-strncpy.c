#include "main.h"
/**
* _strncpy - check the code
* @dest: desc pointer variable
* @src: src pointer variable
* @n: n integer variable
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, check = 0;
while (src[i++])
	check++;
for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];
for (i = check; i < n; i++)
	dest[i] = '\0';
return (dest);
}
