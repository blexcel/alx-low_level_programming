#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: param that points to a char
 * @src: param that points to a char
 * @n: int parameter
 *
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n;)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
