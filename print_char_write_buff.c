#include "main.h"

/**
 * print_char - prints a character to buffer or standard output
 * @args_inventory: the arguments inventory with commonly used arguments
 * Return: number of characters printed to buffer
 */
void print_char(inventory_t *args_inventory)
{
	args_inventory->char_arg = va_arg(*(args_inventory->args), int);
	write_buffer(args_inventory);
}

/**
 * print_percent - prints a percent symbol to buffer or stdout
 * @args_inventory: the arguments inventory with commonly used arguments
 * Return: number of characters printed to buffer
 */
void print_percent(inventory_t *args_inventory)
{
	args_inventory->char_arg = '%';

	if (args_inventory->space_flag)
	{
		args_inventory->space_flag = 0;
		args_inventory->buffer[--(args_inventory->buffer_index)] = '\0';
	}

	write_buffer(args_inventory);
}
