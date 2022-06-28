#include "main.h"
#include <stdlib.h>

/**
 *_strdup - check the code
 *@str: pointer var.
 *Return: pointer
*/

char *_strdup(char *str)
{
int i;
char *x;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
x = malloc(sizeof(char) * i);
if (x == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
x[i] = str[i];
x[i] = '\0';
return (x);
}
