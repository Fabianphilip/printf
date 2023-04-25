#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifiers - Struct for conversion specifiers
 *
 * @specifier: The conversion specifier
 * @f: The function pointer to corresponding print function
 */
typedef struct specifiers
{
char specifier;
int (*f)(va_list);
} specifiers_t;

/* Helper Functions */
int _putchar(char c);
int _strlen(char *str);

/* Print Functions */
int print_char(va_list arg);
int print_string(va_list arg);
int print_integer(va_list arg);
int print_unsigned(va_list arg);
int print_binary(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_address(va_list arg);
int print_percent(va_list arg);

/* Main printf function */
int _printf(const char *format, ...);

#endif /* MAIN_H */
