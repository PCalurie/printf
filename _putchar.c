#include "main.h"
/**
 * _putchar - function writes c to std out
 * @c: char to print
 * Return: 1 on success or else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
