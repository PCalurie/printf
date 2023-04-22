#include "main.h"
#include <stdio.h>
/**
 * reset_buffer - initializes and resets a buffer
 * @buffer: the buffer size
 */
void reset_buffer(char *buffer)
{
	int x;

	for (x = 0; x < 1024; x++)
	{
		buffer[x] = 0;
	}
	buffer[x] = '\0';
}
