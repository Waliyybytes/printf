#include <stdio.h>
#include <stdlib.h>
#include "printf.h"

/**
 * process - prints to the screen
 * @format: format specifier
 * @print_arr: pointer to function
 * @args: variadic list
 */



int process (const char *format, prt_fmt print_arr[], va_list args)
{
	int i = 0, j = 0, p_char = 0;
	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for(j =0;print_arr; j++)
			{
				if (format[i+1] == print_arr[j].ltr)
				{
					p_char += print_arr[j].p(args);
					break;
					}
				}
			i++;
		}
		else
		{
			char f = format[i];
			write(1, &f, 1);
			p_char++;
			}
		i++;
	}
	return (p_char);
}
