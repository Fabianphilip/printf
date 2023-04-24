#include "main.h"

/**
 * print_int - writes integers to buffer
 * @inv: pointer to the inventory structure
 * @n: integer to be printed, may be type casted to long int.
 */
void print_int(inventory_t *inv, long int n)
{
	long int size = 1, ones, copy = n;
	int digit;

	ones = n % 10;
	n /= 10;
	if (ones < 0)
	{
		ones *= -1, copy *= -1, n *= -1;
		inv->c0 = '-';
		write_buffer(inv);
	}
	else if (inv->c1 == '+')
	{
		inv->c0 = '+';
		write_buffer(inv);
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
			copy /= 10, size *= 10;
		while (size > 0)
		{
			digit = n / size;
			inv->c0 = ('0' + digit);
			write_buffer(inv);
			n -= digit * size;
			size /= 10;
		}
	}
	inv->c0 = ('0' + ones);
	write_buffer(inv);
}

/**
 * p_int - writes integers to buffer
 * @inv: pointer to the inventory structure
 */
void p_int(inventory_t *inv)
{
	int n;

	n = va_arg(*(inv->args), int);

	print_int(inv, (long int)n);
}

/**
 * p_longint - writes long integers to buffer
 * @inv: pointer to the inventory structure
 */
void p_longint(inventory_t *inv)
{
	long int n;

	n = va_arg(*(inv->args), long int);

	print_int(inv, n);
}
