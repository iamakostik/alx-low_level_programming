#include "main.h"
#include <stdlib.h>

/**
 *str_concat - check the code
 *@s1: s1 pointer
 *@s2: s2 pointer
 *Return: pointer to string
*/

char *str_concat(char *s1, char *s2)
{
int x, y, z;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (x = 0; s1[x]; x++)
;
for (y = 0; s2[y]; y++)
;
y++;

str = malloc(sizeof(char) * (x + y));
if (str == NULL)
{
return (NULL);
}

for (z = 0; z < x; z++)
{
str[z] = s1[z];
}

for (; z < x + y; z++)
{
str[z] = s2[z - x];
}
str[z] = '\0';
return (str);
}
