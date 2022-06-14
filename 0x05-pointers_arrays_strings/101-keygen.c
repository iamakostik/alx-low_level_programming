#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
  * main - check the code
  * Return: Always 0 (success)
  */
int main(void)
{
int total;
char n;
srand(time(NULL));
while (total <= 2645)
{
n = rand() % 128;
total += n;
putchar(n);
}
putchar(2772 - total);
return (0);
}
