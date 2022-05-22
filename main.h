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
int print_percent(va_list list);
int print_decimal(va_list list);
int print_int(va_list list);
int print_unsigned(va_list list);
char *convert(unsigned long int num, int base, int lowercase);
int print_binary(va_list list);
int print_decimal(unsigned int x);
int print_octal(unsigned int x);
int print_hex(unsigned int x);
int print_HEX(unsigned int x);
int print_string(va_list list);
int print_char(va_list list);
int print_pointer(va_list list);
int get_flags(char s, list);
int print_rev(va_list list);
int print_rot13(va_list list);

#endif
