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
	int x, y;

	char *str1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ,?!;'@-=+\"\\$%^&*()`~<>/:[]{}_|.\n";
	char *str2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM ,?!;'@-=+\"\\$%^&*()`~<>/:[]{}_|.\n";

	str = va_arg(lists, char *);
	for (x = 0; str[x] != '\0'; x++, *p_index += 1)
	{
		for (y = 0; str1[y] != '\0'; y++)
		{
			if (str[x] == str1[y])
			{
				buffer[*p_index] = str2[y];
				break;
			}
			else if (str[x] == str2[y])
			{
				buffer[*p_index] = str1[y];
				break;
			}
		}
		if (str1[y] == '\0' && str2[y] == '\0')
			buffer[*p_index] = str[x];
	}
}
