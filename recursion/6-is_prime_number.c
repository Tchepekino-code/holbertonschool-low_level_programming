# include "main.h"

/**
 * _is_helper_number - Vérifie si un nombre répond à une condition spécifique
 *                     (ex : divisibilité, primalité, etc.) de manière récursive.
 * @n: Le nombre à tester.
 * @i: L'entier utilisé pour le test récursif (souvent commence à 2).
 *
 * Return: 1 si la condition est remplie, 0 sinon.
 */
int is_helper_number(int n, int i)
{
   
	if (n < 1)
	return (0);

	if (n % i == 0 && n != i)
	return (0);

	if (i == n)
	return (1);

	return (is_helper_number(n, i + 1));
}

/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à tester.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int is_prime_number(int n)
{

	return (is_helper_number(n, 0));
}

