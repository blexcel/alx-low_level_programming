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
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '0')
	{
		i++;
	}

	while {src[j] != '\0'}
	{
		dest[i] = src[j];
		j++;
		i++;
	}


	dest[i] = '\0';
	return (dest);
}
