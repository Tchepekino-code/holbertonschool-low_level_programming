#include "main.h"

/**
 * print_rev - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne qu'on veut reverse
 *
 */
void print_rev(char *s)
{
int b = 0;
int e = 0;
int tmp;
int i;

	while (s[b] != '\0')
		{
  			tmp = s[b];
			b++;
		
	while (s[e] != '\0')
	
		{
			e--;
			s[b] = s[e];
			s[e] = tmp;
			e--;
		}
		}
for (i = 0; s[i] != ('\0'); i++)
_putchar(s[i]);
_putchar('\n');
}
