#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d, flip_count = 0;
	unsigned long int h = sizeof(unsigned long int) * 8;

for (d = 63; d >= 0; d--)
	{
		flip_count = h >> i;
		if (flip_count & 1)
			flip_count++;
	}

	return (flip_count);
}
