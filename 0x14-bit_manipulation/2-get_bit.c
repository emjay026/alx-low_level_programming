#include "main.h"
#include <limits.h>

/**
* get_bit - function that returns the value of a bit at a given index.
* @n: number to extract the bit from
* @index: the position of bit in binary representation of number.
*
* Return: bit at index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = 0, i = 0;
	unsigned long int mask = 1 << index;

	for (i = n; i > 0; len++)
		i /= 2;

	if (n > ULONG_MAX || index >= len)
		return (-1);

	return ((n & mask) != 0);
}
