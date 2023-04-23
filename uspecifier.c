#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_u - u specifire
* @lists: the lists
* @buffer: the buffer used
* @p_index: pointer to index
*
* Return: void
*/
void print_u(va_list lists, char *buffer, int *p_index)
{
	unsigned int x;
	int y, num_len;
	char *num_str;

	x = va_arg(lists, int);
	num_len = digits_count(x);
	num_str = malloc(num_len * sizeof(char));
	if (num_str == NULL)
		return;
	ustr(num_str, x);
	for (x = *p_index, y = 0; y < num_len; *p_index += 1, x++, y++)
	{
		if (*p_index == 1024)
		{
			write_buffer(buffer, p_index);
			reset_buffer(buffer);
			*p_index = 0;
		}
		buffer[*p_index] = num_str[y];
	}
	free(num_str);
}
/**
* print_h - h specifier
* @lists: lists
* @buffer: buffer
* @p_index: pointer to the index
*
* Return: void
*/
void print_h(va_list lists, char *buffer, int *p_index)
{
	unsigned int n;
	int x;
	char *hex_values;
	char *_hex;

	n = va_arg(lists, int);
	hex_values = "0123456789abcdef";
	_hex = malloc(9 * sizeof(char));
	if (_hex == NULL)
		return;
	for (x = 0; n != 0; x++)
	{
		_hex[x] = hex_values[n % 16];
		n /= 16;
	}
	for (x--; x >= 0; *p_index += 1, x--)
	{
		buffer[*p_index] = _hex[x];
	}
	free(_hex);
}
/**
* print_ch - ch specifire
* @lists: list available
* @buffer: buffer used
* @p_index: pointer to the index
*
* Return: void
*/
void print_ch(va_list lists, char *buffer, int *p_index)
{
	unsigned int n;
	int x;
	char *hex_values;
	char *_hex;

	n = va_arg(lists, int);
	hex_values = "0123456789ABCDEF";
	_hex = malloc(9 * sizeof(char));
	if (_hex == NULL)
		return;
	for (x = 0; n != 0; x++)
	{
		_hex[x] = hex_values[n % 16];
		n /= 16;
	}
	for (x--; x >= 0; *p_index += 1, x--)
	{
		buffer[*p_index] = hex[x];
	}
	free(_hex);
}
/**
* print_o - o specifier
* @lists: the list
* @buffer: buffer used
* @p_index: pointer to index
*
* Return: void
*/
void print_o(va_list lists, char *buffer, int *p_index)
{
	unsigned int n;
	int x;
	char *oct_values;
	char *_oct;

	n = va_arg(lists, int);
	oct_values = "0123456789ABCDEF";

	_oct = malloc(12 * sizeof(char));
	if (_oct == NULL)
		return;
	for (x = 0; n != 0; x++)
	{
		_oct[x] = oct_values[n % 8];
		n /= 8;
	}
	for (x--; x >= 0; *p_index += 1, x--)
	{
		buffer[*p_index] = _oct[x];
	}
	free(_oct);
}
