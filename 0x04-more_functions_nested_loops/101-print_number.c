#include "main.h"
/**
 * print_number -prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (xx / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
