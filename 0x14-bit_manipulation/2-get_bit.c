#include "main.h"

/**
 * get_bit - this returns the value of a bit in an index in a decimal number
 * @n: the number to search in
 * @index: is the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
