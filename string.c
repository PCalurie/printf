#include “main.h”
#include <stdio.h>
/**
* istr - converts an integer to string
* @str: string
* @n: number
*
* Return: a string
*/
char *istr(char str[], long int n)
{
	int x, last;
int div = 1;
int len = 0;
	long Int temp = n;

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
	for (len = 0; temp > 0; len++)
{
    		div *= 10;
    		temp /= 10;
}
	div = div / 10;

	for (div = 1; n / div > 9; div *= 10)
	;
	
for (; div >= 1; div /= 10)
{
		str[x++] = ((n / div) + '0');
		n = n % div;
}
	str[x] = last + '0';
	return (str);
}
/**
 * ustr - converts an unsigned integer to a string
 * @str: pointer to the char array where the string will be stored
 * @num: the unsigned integer to be converted
 *
 * Return: pointer to the converted string
 */
char *ustr(char str[], unsigned int num)
{
        int x, len = 0;
        unsigned int n;

        n = num;
        for (; n != 0; len++)
                n /= 10;

        x = 0;
        for (; x < len; x++)
        {
                str[len - (x + 1)] = (num % 10) + '0';
                num /= 10;
        }

        str[len] = '\0';
        return (str);
}

/**
 * digits_count - getting the length of a number
 * @num: the number
 *
 * Return: the length of the number
 */
int digits_count(int num)
{
        int len = 0;
        int n = num;

        for (; n != 0; len++)
        {
                n /= 10;
        }

        return (len);
}

