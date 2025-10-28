#include "main.h"

/**
 * _puts - retourne la longueur d'une chaîne de caractères
 * @*str: la chaîne qu'on veut ecrire
 *
 */
void _puts(char *str)
{
int c = 0;
while (str[c] != '\0'){
_putchar(str[c]);
c++;
}
 _putchar('\n');
}
