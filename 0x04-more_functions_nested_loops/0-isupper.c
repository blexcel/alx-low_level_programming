#include "main.h"
#include <ctype.h>

/*
 * _isupper: Check for uppercase character
 * c - value for c
 *
 * Return - returns 1 if c is uppercase and o if otherwise
 */

int _isupper(int c);
{
	char uppercase = ''A;
	int isupper = 0;

	for (; uppercasse <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
