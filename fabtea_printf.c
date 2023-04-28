#include "main.h"
/**
 * _printf - Function that selects the correct function to print.
 * @format: Identifier to look for.
 *
 * Return: The length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int f = 0, t, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[f] != '\0')
	{
		t = 13;
		while (t >= 0)
		{
			if (m[t].id[0] == format[f] && m[t].id[1] == format[f + 1])
			{
				len += m[t].f(args);
				f = f + 2;
				goto Here;
			}
			t--;
		}
		_putchar(format[f]);
		len++;
		f++;
	}
	va_end(args);
	return (len);
}
