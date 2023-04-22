#include "main.h"
/**
* print_r - reverses a string passed
* @valist: argument passed
* @buffer: values in the buffer
* @p_index: pointer to index
*/
void print_r(va_list lists, char *buffer, int *p_index)
{
	int x, str_len;
	char *str;

	str = va_arg(lists, char *);
	str_len = str_len(str) - 1;

	for (x = str_len; x >= 0; x--, *p_index += 1)
	{
		buffer[*p_index] = str[x];
	}
}
