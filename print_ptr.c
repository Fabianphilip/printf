#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int q;
	int t;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (t = 0; s[t] != '\0'; t++)
		{
			_putchar(s[t]);
		}
		return (t);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	q = printf_hex_aux(a);
	return (q + 2);
}
