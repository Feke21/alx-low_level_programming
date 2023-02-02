#include "main.h"

/**
 * flip_bits - count no of bits needed to flip from one no to the next
 * @n: first number
 * @m: number to flip @n to
 *
 * Return: needed no of bits to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int bits = 0;

	xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
