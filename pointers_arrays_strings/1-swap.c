#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * Cette fonction échange les valeurs des deux entiers pointés
 * par a et b.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
