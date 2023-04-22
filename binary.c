#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_b - converts an unsigned integer to binary
* @lists: argument list
* @buffer: values in the list
* @p_index: the index position
*/
void print_b(va_list lists, char *buffer, int *p_index)
{
	unsigned int n;
	int x;
	char *binary_values;
	char *_binary;

	n = va_arg(lists, int);
	binary_values = "01";
	_binary = malloc(33 * sizeof(char));
	if (_binary == NULL)
		return;
	if (n == 0)
	{
		buffer[*p_index] = '0';
		*p_index += 1;
	}
	else
	{
		for (x = 0; n != 0; x++)
		{
			_binary[x] = binary_values[n % 2];
			n /= 2;
		}
		for (x--; x >= 0; *p_index += 1, x--)
		{
			buffer[*p_index] = _binary[x];
		}
	}
	free(_binary);
}
