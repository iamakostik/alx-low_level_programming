#include <stdio.h>
#include <stdlib.h>
/**
* main - check
*
* @argc: count
* @argv: arg variable
* Return: int
*/
int main(int argc, char **argv)
{
int sum, i;

i = 0;
sum = 0;
if (argc < 2)
{
printf("%d\n", sum);
}
else
{
sum = atoi(argv[1]) + atoi(argv[2]);
i = 1;
printf("%d\n", sum);
}
return (i);
}
