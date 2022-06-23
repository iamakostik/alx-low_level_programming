/**
 * getprime - check the code
 * @x: variable
 * @y: variable
 *
 * Return: 1 if successful
 */
int getprime(int x, int y)
{
if (x == y)
return (1);
else if (x % y == 0)
return (0);
return (getprime(x, y + 1));
}
/**
 * is_prime_number - check the code
 * @n: Number variable
 *
 * Return: 0 for successful
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (getprime(n, 2));
}

