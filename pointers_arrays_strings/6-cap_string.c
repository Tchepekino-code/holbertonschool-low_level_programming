#include "main.h"

/**
 * char *cap_string(char *) - function that capitalizes all words of a string.
 * @str: chaine a capitaliser
 *
 * Return: chaine capitalisée
 */
char *cap_string(char *s)
{
    int i = 0;
    int j;
    char sp[] = ",;.!?\"(){}";

    while (s[i] != '\0')
    {
        for (j = 0; sp[j] != '\0'; j++)
        {
            if (s[i] == sp[j] && s[i + 2] >= 'a' && s[i + 2] <= 'z')
                s[i + 2] -= 32;
        }
        i++;
    }
    return (s);
}
