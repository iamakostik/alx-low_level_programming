#include <stdio.h>
#include <stdlib.h>

/**
* main - check
* @argc: arg count
* @argv: arg variable
* Return: int
*/
int main(int argc, char **argv)
{
int t, i;
i = 0;
t = 0;
if (argc == 3)
{
t = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", t);
}
else
{
i = 1;
printf("%s\n", "Error");
}
return (i);
}
