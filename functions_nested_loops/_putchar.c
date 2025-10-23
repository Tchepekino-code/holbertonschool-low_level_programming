/* Déclaration manuelle de write() pour éviter les includes */
int write(int fd, const void *buf, unsigned int count);

/**
 * _putchar - écrit un caractère sur la sortie standard
 * @c: caractère à afficher
 *
 * Return: 1 en cas de succès, -1 en cas d'erreur
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/* Exemple de test dans le même fichier */
int main(void)
{
    char phrase[] = "Bonjour!\n";
    int i;

    for (i = 0; phrase[i] != '\0'; i++)
        _putchar(phrase[i]);

    return 0;
}
