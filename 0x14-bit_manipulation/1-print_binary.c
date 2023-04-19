#include <stdio.h>
#include "main.h"

/**
 * to print_binary number - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary_num (unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary_num(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
