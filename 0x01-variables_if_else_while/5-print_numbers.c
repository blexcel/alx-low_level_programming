#include <stdio.h>

/**
 * main - All single digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar("%d", n);
		n++;
	}
	putchar("\n");
	return (0);
}
