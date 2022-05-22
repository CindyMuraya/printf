#ifndef PRINTF_H
#define PRINTF_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>

/*
 * Desc: Header file containing the prototypes of all
 * the fuctions in the printf project
 */

int _putchar(char c);
int _printf(const char *format, ...);
int printf_percent(va_list args);
int printf_decimal(va_list args);
int printf_int(va_list args);
int printf_unsigned(va_list args);
char *convert(unsigned long int num, int base, int lowercase);
int printf_binary(va_list args);
int printf_decimal(unsigned int x);
int printf_octal(unsigned int x);
int printf_hex(unsigned int x);
int printf_HEX(unsigned int x);
int printf_string(va_list args);
int printf_char(va_list args);
int printf_pointer(va_list args);
int get_flags(char s, args);
int printf_rev(va_list args);
int printf_rot13(va_list args);

#endif
