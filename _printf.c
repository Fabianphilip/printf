#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @arg: A va_list containing a single character to print
 *
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string to stdout
 * @arg: A va_list containing a string to print
 *
 * Return: The number of characters printed
 */
int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count += write(1, str, 1);
		str++;
	}

	return (count);
}

/**
 * print_integer - Prints an integer
 * @arg: A va_list containing an integer to print
 *
 * Return: Number of characters printed
 */
int print_integer(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0;
	char c;

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n / 10)
		count += print_integer(arg);

	c = n % 10 + '0';

	count += write(1, &c, 1);

	return (count);
}

/**
 * _printf - Prints a formatted string to the standard output
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_char(arg);
					break;
				case 's':
					count += print_string(arg);
					break;
				case 'd':
				case 'i':
					count += print_integer(arg);
					break;
				default:
					count += write(1, "%", 1);
					count += write(1, format, 1);
					break;
			}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(arg);
	return (count);
}
