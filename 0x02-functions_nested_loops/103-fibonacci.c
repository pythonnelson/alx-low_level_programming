#include <stdio.h>
/**
 * main - Prints the sum of Even Fibonnacci numbers
 * less than 40000000.
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
