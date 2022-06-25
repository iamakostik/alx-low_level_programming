#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code
* @argc: arg count
* @argv: arg variable
* Return: 0
*/

int main(int argc, char **argv)
{
int i;
for (i = 0; argc > i; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

