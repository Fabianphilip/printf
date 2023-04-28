#include "main.h"

/**
 * printf_HEX - prints an hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_HEX(va_list val)
{
	int t;
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

	for (t = 0; t < counter; t++)
	{
		array[t] = temp % 16;
		temp /= 16;
	}
	for (t = counter - 1; t >= 0; t--)
	{
		if (array[t] > 9)
			array[t] = array[t] + 7;
		_putchar(array[t] + '0');
	}
	free(array);
	return (counter);
}

/**
 * printf_HEX_aux - prints an hexadecimal number.
 * @num: number to print.
 * Return: counter.
 */
int printf_HEX_aux(unsigned int num)
{
	int t;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (t = 0; t < counter; t++)
	{
		array[t] = temp % 16;
		temp /= 16;
	}
	for (t = counter - 1; t >= 0; t--)
	{
		if (array[t] > 9)
			array[t] = array[t] + 7;
		_putchar(array[t] + '0');
	}
	free(array);
	return (counter);
}
