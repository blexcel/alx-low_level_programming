#include <stdio.h>

/**
 * main - All possible 2 digit numberthat meet certain condition
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n = '0';
	int s = '0';

	while (n <= '9')
	{
		s = '0';
		while (s <= '9')
		{
			if (s == n)
			{

			}
			else if (n > s)
			{

			}
			else
			{
				putchar(n);
				putchar(s);
				if (s == '9' && n == '8')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
