#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
int lastnumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnumber = n % 10;
if (lastnumber > 5)
{
printf("Last digit of %u is greater than 5", n);
}
else if (lastnumber == 0)
{
printf("Last digit of %u is 0", n);
}
else
{
printf("Last digit of %u is less than 6 and not 0", n);
}
return (0);
}
