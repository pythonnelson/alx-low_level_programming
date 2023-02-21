#include "main.h"
/**
 * print_last_digits - prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of a num
 */
int print_last_digits(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
