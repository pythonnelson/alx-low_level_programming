#include "main.h"

/**
 * flip_bits - this counts the number of bits to be changed
 * to get from one number the other
 * @n: gets the first number
 * @m: gets the second number
 *
 * Return: returns the number of bit(s) to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
