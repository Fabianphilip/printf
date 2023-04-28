#include "main.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int t, x, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (t = 0; s[t]; t++)
	{
		k = 0;
		for (x = 0; alpha[x] && !k; x++)
		{
			if (s[t] == alpha[x])
			{
				_putchar(beta[x]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[t]);
			counter++;
		}
	}
	return (counter);
}
