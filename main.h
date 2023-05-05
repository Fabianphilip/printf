#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct Print - struct for printer functions
 * @type_arg: Identifier
 * @f: pointer to a printer functions
 *
 * Description: Struct that stores pointers to a
 * printer functions
 */
typedef struct print
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(valist val);
int _putchar(char c);
int printf_HE(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);

#endif
