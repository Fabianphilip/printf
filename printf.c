#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int count = 0;

	va_start(arg_list, format);
	count = parse_format_string(format, arg_list);

	va_end(arg_list);

	return (count);
}
