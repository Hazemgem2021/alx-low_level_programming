#include "main.h"
/**
 *using binary_to_uint,change a binary number into an unsigned int.
 * b: string contain binary number
 * Return: converted decimal number or 0 if a character
 */

unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int decml_val = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		decml_val = 2 * decml_val + (b[d] - '0');
	}

	return (decml_val);
}
