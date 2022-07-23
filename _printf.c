#include <stdio.h>
#include <stlib.h>
#include "printf.h"
/**
 * _printf- prints anything
 * @format: specifier
 * Return: count of characters printed or -1 if false
 */

int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;
	prt_fmt print_arr[] = {
		{'c', print_char},
                {'s', print_string},
                {'d',print_inta},
                {'i',print_inta}
        };
	if (format == NULL)
		return (-1);
	va_start(args, format);
	char_count = process(format, print_arr, args);
	va_end(args);
	return (char_count);
}


