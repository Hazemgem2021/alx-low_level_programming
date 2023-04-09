#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * * Return: flip
 */


 unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d, flip = 0;
	unsigned long int x = sizeof(unsigned long int) * 8;

	for (d = 0; d < x; d++)
	{
		if ((m & 1) != (n & 1))
			flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
