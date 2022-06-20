#include "main.h"
/**
 * _strstr - check the code
 * @haystack: haystack pointer
 * @needle: needle pointer
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
int x;
while (*haystack != '\0')
{
x = 0;
while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
haystack++, needle++, x++;
if (*needle == '\0')
return (haystack - x);
haystack -= (x - 1), needle -= x;
}
return ('\0');
}
