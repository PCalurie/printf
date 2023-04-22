#include "main.h"
/**
* print_perc - percent specifire
* @lists: list used
* @buffer: buffer to use
* @p_index: pointer to the index
* Return: void
*/
void print_perc(
__attribute__((unused))va_list lists, char *buffer, int *p_index)
{
	buffer[*p_index] = '%';
	*p_index += 1;
}
