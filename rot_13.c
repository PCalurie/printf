#include "main.h"
/**
 * print_R - function that converts a string into rot13
 * @lists: argument list
 * @buffer: values in the buffer
 * @p_index: the index position
 */
void print_R(va_list lists, char *buffer, int *p_index)
{
	char *str;
	int x;

	str = va_arg(lists, char *);
	for (x = 0; str[x] != '\0'; x++, (*p_index)++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			buffer[*p_index] = (str[x] - 'a' + 13) % 26 + 'a';
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			buffer[*p_index] = (str[x] - 'A' + 13) % 26 + 'A';
		}
		else
		{
			buffer[*p_index] = str[x];
		}
	}
}
