#include "main.h"

/**
 * set_bit - to set a bit at a given index to one (1)
 * @n: the pointer to the number to change
 * @index: the index of the bit to set to one (1)
 *
 * Return: returns 1 if success, -1 if there are failures or errors
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
