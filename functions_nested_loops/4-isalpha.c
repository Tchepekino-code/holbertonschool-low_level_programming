#include "main.h"

/**
 * _isalpha - checks for alphabtic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter,lowercase or uppercase
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
