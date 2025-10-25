#include "main.h"

/**
 * print_last_digit - ecrit le dernier chiffre d'un nombre
 * @i: le nombre dont on veut le dernier chiffre
 *
 * Return: le dernier chiffre de i
 */
int print_last_digit(int i)
{
int L = n% 10;
if (L >= 0)
{
return (L);
else
{
return (-L);
}
_putchar(L + '0');
}
  
