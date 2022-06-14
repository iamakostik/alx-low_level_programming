#include "main.h"
/**
* print_array - check the code
* @a : pointer variable
* @n : variable
*/
void print_array(int *a, int n)
{
int check, i;
for (check = 0; a[check] != '\0'; check++)
{
}
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
