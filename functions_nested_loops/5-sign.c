#include "main.h"

/**
 * print_sign - checks for alphabtic character
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
