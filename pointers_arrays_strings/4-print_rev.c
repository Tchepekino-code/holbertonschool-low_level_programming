#include "main.h"

/**
 * print_rev - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne qu'on veut revers.*
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;

	while (len > 0)
	{
	len--;
	_putchar(s[len]);
	}

	_putchar('\n');
}
