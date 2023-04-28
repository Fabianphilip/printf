#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_oct(va_list val)
{
	int f;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (f = 0; f < counter; f++)
	{
		array[f] = temp % 8;
		temp /= 8;
	}
	for (f = counter - 1; f >= 0; f--)
	{
		_putchar(array[f] + '0');
	}
	free(array);
	return (counter);
}
