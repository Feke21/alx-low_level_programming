#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number. 0 if b is null
 * or has chars that are not 0 or 1 in b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base_2;

	if (b == NULL)
		return (0);

	i = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			i += base_2;
	}
	return (i);
}
