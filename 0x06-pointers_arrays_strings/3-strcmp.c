#include "main.h"
/**
* _strcmp - check the code
* @s1: variable s1
* @s2: variable s2
* Return: the compared value
*/
int _strcmp(char *s1, char *s2)
{
int x = 0, y = 0;
while (s1[x] != '\0' && s2[x] != '\0' && y == 0)
{
y = s1[x] - s2[x];
x++;
}
return (y);
}
