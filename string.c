#include <stdio.h>
/**
 * istr - integer to string
 * @str: array of chars
 * @n: number
 *
 * Return: one str
 */
char *istr(char str[], long int n)
{
	int x, temp, div, len, last;

	last = n % 10;
	x = 0;
	if (last < 0)
	{
		last *= -1;
		str[x] = '-';
		x++;
	}
	n = (n / 10);

	if (n < 0)
	{
		n *= -1;
	}

	len = 0;
	div = 1;
	temp = n;

	while (temp > 0)
	{
		len += 1;
		div *= 10;
		temp = temp / 10;
	}

	div = div / 10;
	while (div >= 1)
	{
		str[x] = ((n / div) + '0');
		n = n % div;
		div /= 10;
		x++;
	}
	str[x] = last + '0';
	return (str);
}

/**
 * ustr - uint to string
 * @str: string
 * @num: num
 *
 * Return: char array
 */
char *ustr(char str[], unsigned int num)
{
	int x, rem, len = 0, n;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	x = 0;

	while (x < len)
	{
		rem = num % 10;
		num = num / 10;

		str[len - (x + 1)] = rem + '0';
		x++;
	}

	str[len] = '\0';
	return (str);
}
/**
 * digits_count - getting the length of a number
 * @num: the number
 *
 * Return: int
 */
int digits_count(int num)
{
	int n, len;

	n = num;
	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
/**
 * _strlen - count the length of a string
 *  @s: char pointer
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int x, count;

	count = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		count++;
	}
	return (x);
}
