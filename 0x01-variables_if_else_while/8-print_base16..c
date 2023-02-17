#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ls;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ls = 'a'; ls <= 'f'; ls++)
		putchar(ls);

	putchar('\n');
	return (0);
}
