#include "main.h"

/**
 * get_endianness - this checks if a device is little or big endian
 * Return: returns 0 for a big endian, or 1 for a little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
