#include "main.h"

/**
 * printf_hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_hex(va_list val)
{
	int f;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (f = 0; f < counter; f++)
	{
		array[f] = temp % 16;
		temp /= 16;
	}
	for (f = counter - 1; f >= 0; f--)
	{
		if (array[f] > 9)
			array[f] = array[f] + 39;
		_putchar(array[f] + '0');
	}
	free(array);
	return (counter);
}

/**
 * printf_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int num)
{
	long int t;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (t = 0; t < counter; t++)
	{
		array[t] = temp % 16;
		temp /= 16;
	}
	for (t = counter - 1; t >= 0; t--)
	{
		if (array[t] > 9)
			array[t] = array[t] + 39;
		_putchar(array[t] + '0');
	}
	free(array);
	return (counter);
}
