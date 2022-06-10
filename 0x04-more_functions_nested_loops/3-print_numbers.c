#include "main.h"

/**
 * print_numbers - prints numbers between 0 and 9
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
