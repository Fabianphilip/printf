#include "main.h"

/**
 * p_binary - writes unsigned integer to buffer in binary format
 * @inv: pointer to the inventory containing arguments and buffer
 */
void p_binary(inventory_t *inv)
{
	unsigned int num = va_arg(*(inv->args), unsigned int);
	int i, j;
	char *bin, *copy;

	bin = _calloc(33, sizeof(char));
	if (bin)
	{
		for (i = 0; num; i++, num /= 2)
			bin[i] = ((num % 2) + '0');
		if (i == 0)
		{
			inv->c0 = '0';
			write_buffer(inv);
		}
		else
		{
			copy = _calloc(i + 1, sizeof(char));
			if (copy)
			{
				for (j = 0, i--; i >= 0; j++, i--)
					copy[j] = bin[i];

				puts_buffer(inv, copy);
				free(copy);
			}
			else
				inv->error = 1;
		}
		free(bin);
	}
	else
		inv->error = 1;
}
