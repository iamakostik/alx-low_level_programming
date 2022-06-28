#include "main.h"
#include <stdlib.h>

/**
 * argstostr - check the code
 * @ac: variable
 * @av: pointer to pointer
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
char *s;
int x, y, z, j, k;
if (ac == 0 || av == NULL)
return (0);
x = 0, k = 0;
for (z = 0; z < ac; z++)
{
y = 0;
while (av[z][y])
y++;
x += y + 1;
}
s = malloc((x + 1) * sizeof(char));
if (s == 0)
return (0);
for (j = 0; j < ac; j++)
{
y = 0;
while (av[j][y])
{
*(s + k) = av[j][y];
k++;
y++;
}
*(s + k) = '\n';
k++;
}
*(s + k) = '\0';
return (s);
}
