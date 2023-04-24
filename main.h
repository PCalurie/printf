#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct format
{
	char id;
	void (*f)();
} convert_match;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_pointer(va_list args);
int _strlen(const char *s);
int compare_id(const char *format, const char *id);
int print_37(va_list args);
int print_dec(va_list args);
int print_srev(va_list args);
int print_rot13(va_list args);
int print_bin(va_list args);
int print_exclusive_string(va_list args);
int print_HEXo(unsigned int num);
#endif
