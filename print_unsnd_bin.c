#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int f, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (f = 0; f < 32; f++)
	{
		p = ((a << (31 - f)) & num);
		if (p >> (31 - f))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - f);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
