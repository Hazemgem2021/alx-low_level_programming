#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (d >> 0)
	{
		if (d >> 1)
			print_binary(d >> 1);
		_putchar((d & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
