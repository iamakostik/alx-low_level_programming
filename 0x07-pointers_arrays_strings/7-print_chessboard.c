#include "main.h"
/**
 * print_chessboard - check the code
 * @a: pointer a
 */
void print_chessboard(char (*a)[8])
{
int x = 0, y;
for (; x < 8; x++)
{
for (y = 0; y < 8; y++)
_putchar(a[x][y]);
_putchar('\n');
}
}
