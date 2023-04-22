#include "main.h"
#include <stdlib.h>
/**
* print_p - prints a pointer address
* @lists: argument list
* @buffer: values of the list
* @p_index: the index position
*/
void print_p(va_list lists, char *buffer, int *p_index)
{
	print_lx(lists, buffer, p_index);
}
/**
* print_lx - function prints long addresses
* @lists: argument list
* @buffer: values in the list
* @p_index: the index position
*/
void print_lx(va_list lists, char *buffer, int *p_index)
{
	unsigned long int n;
	int x;
	char *hex_values;
	char *_hex;
	void *l;
	char *b;

	l = va_arg(lists, void *);
	b = "(nil)";
	if (l == NULL)
		for (x = 0; x < 5; x++, *p_index += 1)
			buffer[*p_index] = b[x];
	else
	{
		n = (unsigned long int)l;
		hex_values = "0123456789abcdef";
		_hex = malloc(14 * sizeof(char));

		for (x = 0; n != 0; x++)
		{
			_hex[x] = hex_values[n % 16];
			n /= 16;
		}
		x += 2;
		_hex[13] = '0';
		_hex[12] = 'x';
		for (x--; x >= 0; *p_index += 1, x--)
		{
			buffer[*p_index] = _hex[x];
		}
	}
}
