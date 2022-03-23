#include "main"

/**
 * _strcat - Concatenates two strings
 * @dest: variable for destination
 * @src: variable for source
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
