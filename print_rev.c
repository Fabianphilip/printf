#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int f;
	int t = 0;

	if (s == NULL)
		s = "(null)";
	while (s[t] != '\0')
		t++;
	for (f = t - 1; f >= 0; f--)
		_putchar(s[f]);
	return (t);
}
