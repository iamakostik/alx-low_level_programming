#include "main.h"
/**
* reverse_array - check the code
* @a: point array
* @n: pointer variable
*/
void reverse_array(int *a, int n)
{
int x, y, temp;
y = n - 1;
for (x = 0; x < n / 2; x++)
{
temp = a[x];
a[x] = a[y];
a[y] = temp;
y--;
}
}
