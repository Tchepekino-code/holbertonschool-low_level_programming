#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of a string
 *           consisting entirely of bytes from a set of accepted characters
 * @s: pointer to the string to be scanned
 * @accept: pointer to the string containing the accepted characters
 *
 * Return: number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i = 0;
    int j = 0;

for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0;  accept[j] != '\0'; j++)
{
            if (s[i] == accept[j])
                break;
} 
            if (accept[j] == '\0')
            return count;
        count++;
    }
return (count);
}