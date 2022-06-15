#include "main.h"

/**
 * print_numbers - A function that prints numbers 0 - 9
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar (number);
	}
	_putchar('\n');
}
