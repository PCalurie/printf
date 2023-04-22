#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
void print_char(va_list lists);
void print_int(va_list lists);
void print_float(va_list lists);
void print_string(va_list lists);
void write_buffer(char *buffer, int *p_index);
int str_len(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_str(va_list lists, char *buffer, int *p_index);
void print_c(va_list lists, char *buffer, int *p_index);
void print_d(va_list lists, char *buffer, int *p_index);
char *istr(char str[], long int num);
char *ustr(char str[], unsigned int num);
int float_len(double f);
void print_i(va_list lists, char *buffer, int *p_index);
void print_u(va_list lists, char *buffer, int *p_index);
void print_perc(va_list lists, char *buffer, int *p_index);
void print_p(va_list lists, char *buffer, int *p_index);
void print_lx(va_list lists, char *buffer, int *p_index);
char *tostring(char str[], int num);
int digits_count(int num);
void reset_buffer(char buffer[]);
void print_R(va_list lists, char *buffer, int *p_index);
void *rot13(char *str);
void rev_string(char *s);
void print_h(va_list lists, char *buffer, int *p_index);
void print_ch(va_list lists, char *buffer, int *p_index);
void print_o(va_list lists, char *buffer, int *p_index);
void print_b(va_list lists, char *buffer, int *p_index);
void print_r(va_list lists, char *buffer, int *p_index);
void print_R(va_list lists, char *buffer, int *p_index);
#endif
