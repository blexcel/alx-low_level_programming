#include "main.h"

/**
 * _strcmp - Compare two string
 * @s1: param  pointing to a value
 * @s2: param pointing to a value
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, output;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && (s2 + i) && *(s1 + i) != '\0')
		i++;
	output = (*(s1 + i) - *(s2 + i));
	return (output);
}
