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
int printf_percent(va_list list);
int printf_decimal(va_list list);
int printf_int(va_list list);
int printf_unsigned(va_list list);
char *convert(unsigned long int num, int base, int lowercase);
int printf_binary(va_list list);
int printf_decimal(unsigned int x);
int printf_octal(unsigned int x);
int printf_hex(unsigned int x);
int printf_HEX(unsigned int x);
int printf_string(va_list list);
int printf_char(va_list list);
int printf_pointer(va_list list);
int get_flags(char s, list);
int printf_rev(va_list list);
int printf_rot13(va_list list);

#endif
