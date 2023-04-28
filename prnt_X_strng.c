#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argument.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int f, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] < 32 || s[f] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[f];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(s[f]);
			len++;
		}
	}
	return (len);
}
