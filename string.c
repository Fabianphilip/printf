#include "main.h"
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int f, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (f = 0; f < len; f++)
			_putchar(s[f]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (f = 0; f < len; f++)
			_putchar(s[f]);
		return (len);
	}
}
