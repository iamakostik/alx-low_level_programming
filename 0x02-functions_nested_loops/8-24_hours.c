#include "main.h"
/**
 * jack_bauer - check the code
 */
void jack_bauer(void)
{
int i, n;
for (i = 0; i < 24; i++)
{
for (n = 0; n < 60; n++)
{
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar(':');
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
_putchar('\n');
}
}
}
