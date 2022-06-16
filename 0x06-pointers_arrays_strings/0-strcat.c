#include "main.h"
/**
*_strcat - check the code
*@dest: pointer variable desc
*@src: pointer variable src
*
*Return: returns tdesc pointer
*/
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;
while (dest[x] != '\0')
{/* this increase i to len of dest*/
x++;
}
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
