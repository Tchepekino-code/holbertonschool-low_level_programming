#include "main.h"

/**
 * _atoi - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaine de carateres
 *
 * Return: la chaine de caracteres convertie en entier.
 */
#include <stdio.h>

int _atoi(char *s)
{
int i = 0;
int signe = 1;
int num = 0;
int j;

while (s[i] != '\0')
{
if (s[i] == '-')
signe *= -1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
j = s[i] - '0';

if (signe == 1)
{
if (num > (2147483647 - j + 1) / 10)
return -2147483647;
}
else
{
if (num > (2147483648 / 10))
return -2147483648;
if (num == 214748364 && j > 8)
return -2147483648;
}

num = num * 10 + j;
i++;
}

return (signe * num);
}
