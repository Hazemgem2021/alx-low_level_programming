#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int head;
	int rounds;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (head = n, rounds = 0; (head >>= 1) > 0; rounds++)
		;

	for (; rounds >= 0; rounds--)
	{
		if ((n >> rounds) & 1)
			printf("1");
		else
			printf("0");
	}
}
