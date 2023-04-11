#include "main.h"

/**
 * clear_bit - this set the value of a given bit to 0
 * @n: the pointer to the number to change
 * @index: the index of the bit to clear
 *
 * Return: returns 1 if success, else -1 if failures or errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
