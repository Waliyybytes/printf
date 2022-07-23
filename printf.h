#ifndef PRINTF_H
#define PRINTF_H

/**
 * formt_prnt - a struct
 * @str: member
 * @p: pointer to a function
 */

typedef struct formt_prnt{

	char *ltr;
	int (*p)(va_list ap);
} prt_fmt;

int print_char(va_list ap);

int print_string(va_list ap);

int print_inta(va_list ap);

int _printf(const char *format, ...);


int process (const char *format, prt_fmt print_arr[], va_list args);



#endif
