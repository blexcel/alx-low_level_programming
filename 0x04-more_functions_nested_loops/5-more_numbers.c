#include "main.h"

/**
 * more_numbers - A functio that prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, number;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + 48);
			}
			_putchar((number % 10) + 48);
		}
		_putchar('\n');
	}
}
