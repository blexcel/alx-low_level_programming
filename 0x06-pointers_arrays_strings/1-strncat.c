#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: param points to a char
 * @src: parm points to a char
 * @n: int parameter
 *
 * Return: Return a pointer to a resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);

}
