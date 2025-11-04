#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: factorial of n. If n < 0, returns -1 to indicate error.
 */
int factorial(int n)
{
int f;

    if (n < 0)
        return (-1);
    else if (n == 0)
        return (1);

        f = n * factorial(n - 1);
        return (f);
}
