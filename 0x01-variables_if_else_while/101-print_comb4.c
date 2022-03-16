#include <stdio.h>

/**
 * main - All possible combination of 3 digits that meets certain condition
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n = '0';
	int z = '0';
	int s = '0';

	while (n <= '9')
	{
		z = '0';
		while (z <= '9')
		{
			s = '0';
			while (s <= '9')
			{
				if (n == z || n == s || z == s)
				{

				}
				else if (n > z || n > s || z > s)
				{

				}
				else
				{
					putchar(n);
					putchar(z);
					putchar(s);
					if (n == '7' && z == '8' && s == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				s++;
			}
			z++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
