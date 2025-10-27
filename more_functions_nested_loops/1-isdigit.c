#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre entre 0 et 9
 * @c: le caractère à tester
 *
 * Return: 1 si c est un chiffre entre 0 et 9, 0 sinon
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
  
