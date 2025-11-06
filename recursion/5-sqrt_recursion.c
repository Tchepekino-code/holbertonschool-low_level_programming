#include "main.h"

/**
 * _sqrt_helper - Fonction récursive pour trouver la racine carrée naturelle.
 * @n: nombre dont on cherche la racine carrée.
 * @i: entier utilisé pour tester les valeurs successives.
 *
 * Return: racine carrée naturelle si elle existe, sinon -1.
 */
int _sqrt_helper(int n, int i)
{

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

		return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n
 *         -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	
	return (_sqrt_helper(n, 0));
}

