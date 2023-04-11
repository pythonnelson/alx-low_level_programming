#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing the number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int z;

	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);

		decimal_val = 2 * decimal_val + (b[z] - '0');
	}

	return (decimal_val);
}
