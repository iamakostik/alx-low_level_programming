#include "main.h"
/**
* rev_string - check the code
*
*@s : the pointer variable
*/
void rev_string(char *s)
{
int check, x, y;
char o, n;
for (check = 0; s[check] != '\0'; check++)
{
}
x = check - 1;
y = 0;
while (x > y)
{
o = s[y];
n = s[x];
s[y] = o;
s[x] = n;
x--;
y++;
}
}
