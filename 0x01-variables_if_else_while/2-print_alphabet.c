#include <stdio.h>

/**
 * main - Printing alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	char z = 'a';
	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	putchar('\n');

	return (0);

}
