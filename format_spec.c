#include <stdio.h>
#include <stdlib.h>
#include "printf.h"

/**
 * print_char- print a char
 * @ap: variadic type
 * Return: count of characters
 */

int print_char(va_list ap)
{
	char f = va_arg(ap, int);
	return (write(1, &f, 1));
}

/**
 * print_string- print a char
 * @ap: variadic type
 * Return: count of characters
 */


int print_string(va_list ap)
{
	int i;
	char *s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i],1);
	}
	return (i);

}


/**
 * print_inta- print a char
 * @ap: variadic type
 * Return: count of characters
 */


int print_inta(va_list ap)
{
	int n = va_arg(ap, int);
	int i = 0;
	int cuns = 0;
	int count = 0;

	if (n > 0 || n < 0)
	{
		int a = n;

		if (a < 0)
		{
			n = -n;
			char f = '-';
			write(1,&f,1);
		}

		for (i = 1; i <= n; i *= 10)
				cuns = i;
		while (cuns != 0)
		{
			char g = ('0' + n / cuns);
			write(1,&g,1);
			n %= cuns;
			cuns /= 10;
			count++;
		}
	}
	else
	{
		char k = '0';
		write(1, &k, 1);
		 count++;
	}
	return (count);
}
