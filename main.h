#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_str(const char *s);
int print_int(int num);
int print_hex(unsigned int num, int upper);
int print_ptr(void *ptr);
int print_octal(unsigned int num);
int print_uint(unsigned int num);

/*Helper Functions*/
int parse_format_string(const char *format, va_list args);
int handle_specifier(const char *format, va_list args, int *pos);

#endif
