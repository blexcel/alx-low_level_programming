#include <stdio.h>

/**
 * main - Printing all base 16 numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);

}
