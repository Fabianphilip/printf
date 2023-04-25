#include "main.h"

/**
 * print_rev_string - Prints a string in reverse to stdout or a buffer
 * @args: A pointer to the argument list
 * Return: The number of characters printed
 */
void print_rev_string(inventory_t *args)
{
int i = 0, j = 0, length = 0;
char *string, *copy;

string = va_arg(*(args->args), char *);

length = _strlen(string);
if (length == 1)
{
args->c0 = string[0];
write_buffer(args);
}
else
{
copy = _calloc(length + 1, sizeof(char));
for (i = length - 1, j = 0; i >= 0; i--, j++)
copy[j] = string[i];

puts_buffer(args, copy);
free(copy);
}
}
