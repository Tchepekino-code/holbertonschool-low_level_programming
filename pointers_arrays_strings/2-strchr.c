#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: pointer to the string to be searched
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c)
            return (s + i);
    }
    if (c == '\0')
        return (s + i);
    return NULL;
}