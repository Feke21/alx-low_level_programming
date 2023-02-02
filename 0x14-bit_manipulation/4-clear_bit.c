#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to bit to set
 * @index: index starts from 0 of the bit to set
 *
 * Return: 1 if it works. -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
