#include "main.h"

/**
 * print_string - Writes a string to buffer or stdout
 * @inv: The arguments inventory with commonly used arguments
 *
 * Return: The number of characters written to buffer
 */
void print_string(inventory_t *inv)
{
	int length;
	char *str, *null_str;

	str = va_arg(*(inv->args), char *);
	null_str = "(null)";

	if (str == NULL)
		str = null_str;

	length = _strlen(str);
	if (length)
		puts_buffer(inv, str);
}
